#include "QmlOpenMetaObject.h"

#include <private/qv4engine_p.h>
#include <private/qmetaobjectbuilder_p.h>

#include <qqmlengine.h>
#include <qdebug.h>

class QmlOpenMetaObjectTypePrivate
{
public:
    QmlOpenMetaObjectTypePrivate() : mem(0), cache(0), engine(0) {}

    void init(const QMetaObject *metaObj);

    int propertyOffset;
    int signalOffset;
    QHash<QByteArray, int> names;
    QMetaObjectBuilder mob;
    QMetaObject *mem;
    QQmlPropertyCache *cache;
    QQmlEngine *engine;
    QSet<QmlOpenMetaObject*> referers;
};

QmlOpenMetaObjectType::QmlOpenMetaObjectType(const QMetaObject *base, QQmlEngine *engine)
    : QQmlCleanup(engine), d(new QmlOpenMetaObjectTypePrivate)
{
    d->engine = engine;
    d->init(base);
}

QmlOpenMetaObjectType::~QmlOpenMetaObjectType()
{
    if (d->mem)
        free(d->mem);
    if (d->cache)
        d->cache->release();
    delete d;
}

void QmlOpenMetaObjectType::clear()
{
    d->engine = 0;
}

int QmlOpenMetaObjectType::propertyOffset() const
{
    return d->propertyOffset;
}

int QmlOpenMetaObjectType::signalOffset() const
{
    return d->signalOffset;
}

int QmlOpenMetaObjectType::propertyCount() const
{
    return d->names.count();
}

QByteArray QmlOpenMetaObjectType::propertyName(int idx) const
{
    Q_ASSERT(idx >= 0 && idx < d->names.count());

    return d->mob.property(idx).name();
}

QMetaObject *QmlOpenMetaObjectType::metaObject() const
{
    return d->mem;
}

void QmlOpenMetaObjectType::createProperties(const QVector<QByteArray> &names)
{
    for (int i = 0; i < names.count(); ++i) {
        const QByteArray &name = names.at(i);
        const int id = d->mob.propertyCount();
        d->mob.addSignal("__" + QByteArray::number(id) + "()");
        QMetaPropertyBuilder build = d->mob.addProperty(name, "QVariant", id);
        propertyCreated(id, build);
        d->names.insert(name, id);
    }
    free(d->mem);
    d->mem = d->mob.toMetaObject();
    QSet<QmlOpenMetaObject*>::iterator it = d->referers.begin();
    while (it != d->referers.end()) {
        QmlOpenMetaObject *omo = *it;
        *static_cast<QMetaObject *>(omo) = *d->mem;
        if (d->cache)
            d->cache->update(omo);
        ++it;
    }
}

int QmlOpenMetaObjectType::createProperty(const QByteArray &name)
{
    int id = d->mob.propertyCount();
    d->mob.addSignal("__" + QByteArray::number(id) + "()");
    QMetaPropertyBuilder build = d->mob.addProperty(name, "QVariant", id);
    propertyCreated(id, build);
    free(d->mem);
    d->mem = d->mob.toMetaObject();
    d->names.insert(name, id);
    QSet<QmlOpenMetaObject*>::iterator it = d->referers.begin();
    while (it != d->referers.end()) {
        QmlOpenMetaObject *omo = *it;
        *static_cast<QMetaObject *>(omo) = *d->mem;
        if (d->cache)
            d->cache->update(omo);
        ++it;
    }

    return d->propertyOffset + id;
}

void QmlOpenMetaObjectType::propertyCreated(int id, QMetaPropertyBuilder &builder)
{
    if (d->referers.count())
        (*d->referers.begin())->propertyCreated(id, builder);
}

void QmlOpenMetaObjectTypePrivate::init(const QMetaObject *metaObj)
{
    if (!mem) {
        mob.setSuperClass(metaObj);
        mob.setClassName(metaObj->className());
        mob.setFlags(QMetaObjectBuilder::DynamicMetaObject);

        mem = mob.toMetaObject();

        propertyOffset = mem->propertyOffset();
        signalOffset = mem->methodOffset();
    }
}

class QmlOpenMetaObjectPrivate
{
public:
    QmlOpenMetaObjectPrivate(QmlOpenMetaObject *_q)
        : q(_q), parent(0), type(0), cacheProperties(false) {}

    inline QPair<QVariant, bool> &getDataRef(int idx) {
        while (data.count() <= idx)
            data << QPair<QVariant, bool>(QVariant(), false);
        return data[idx];
    }

    inline QVariant &getData(int idx) {
        QPair<QVariant, bool> &prop = getDataRef(idx);
        if (!prop.second) {
            prop.first = q->initialValue(idx);
            prop.second = true;
        }
        return prop.first;
    }

    inline bool hasData(int idx) const {
        if (idx >= data.count())
            return false;
        return data[idx].second;
    }

    bool autoCreate;
    QmlOpenMetaObject *q;
    QAbstractDynamicMetaObject *parent;
    QList<QPair<QVariant, bool> > data;
    QObject *object;
    QmlOpenMetaObjectType *type;
    bool cacheProperties;
};

QmlOpenMetaObject::QmlOpenMetaObject(QObject *obj, const QMetaObject *base, bool automatic)
: d(new QmlOpenMetaObjectPrivate(this))
{
    d->autoCreate = automatic;
    d->object = obj;

    d->type = new QmlOpenMetaObjectType(base ? base : obj->metaObject(), 0);
    d->type->d->referers.insert(this);

    QObjectPrivate *op = QObjectPrivate::get(obj);
    d->parent = static_cast<QAbstractDynamicMetaObject *>(op->metaObject);
    *static_cast<QMetaObject *>(this) = *d->type->d->mem;
    op->metaObject = this;
}

QmlOpenMetaObject::QmlOpenMetaObject(QObject *obj, QmlOpenMetaObjectType *type, bool automatic)
: d(new QmlOpenMetaObjectPrivate(this))
{
    d->autoCreate = automatic;
    d->object = obj;

    d->type = type;
    d->type->addref();
    d->type->d->referers.insert(this);

    QObjectPrivate *op = QObjectPrivate::get(obj);
    d->parent = static_cast<QAbstractDynamicMetaObject *>(op->metaObject);
    *static_cast<QMetaObject *>(this) = *d->type->d->mem;
    op->metaObject = this;
}

QmlOpenMetaObject::~QmlOpenMetaObject()
{
    if (d->parent)
        delete d->parent;
    d->type->d->referers.remove(this);
    d->type->release();
    delete d;
}

QmlOpenMetaObjectType *QmlOpenMetaObject::type() const
{
    return d->type;
}

void QmlOpenMetaObject::emitPropertyNotification(const QByteArray &propertyName)
{
    QHash<QByteArray, int>::ConstIterator iter = d->type->d->names.constFind(propertyName);
    if (iter == d->type->d->names.constEnd())
        return;
    activate(d->object, *iter + d->type->d->signalOffset, 0);
}

int QmlOpenMetaObject::metaCall(QObject *o, QMetaObject::Call c, int id, void **a)
{
    Q_ASSERT(d->object == o);

    if (( c == QMetaObject::ReadProperty || c == QMetaObject::WriteProperty)
            && id >= d->type->d->propertyOffset) {
        int propId = id - d->type->d->propertyOffset;
        if (c == QMetaObject::ReadProperty) {
            propertyRead(propId);
            *reinterpret_cast<QVariant *>(a[0]) = d->getData(propId);
        } else if (c == QMetaObject::WriteProperty) {
            if (propId >= d->data.count() || d->data.at(propId).first != *reinterpret_cast<QVariant *>(a[0]))  {
                propertyWrite(propId);
                QPair<QVariant, bool> &prop = d->getDataRef(propId);
                prop.first = propertyWriteValue(propId, *reinterpret_cast<QVariant *>(a[0]));
                prop.second = true;
                propertyWritten(propId);
                activate(o, d->type->d->signalOffset + propId, 0);
            }
        }
        return -1;
    } else {
        if (d->parent)
            return d->parent->metaCall(o, c, id, a);
        else
            return o->qt_metacall(c, id, a);
    }
}

QAbstractDynamicMetaObject *QmlOpenMetaObject::parent() const
{
    return d->parent;
}

QVariant QmlOpenMetaObject::value(int id) const
{
    return d->getData(id);
}

void QmlOpenMetaObject::setValue(int id, const QVariant &value)
{
    QPair<QVariant, bool> &prop = d->getDataRef(id);
    prop.first = propertyWriteValue(id, value);
    prop.second = true;
    activate(d->object, id + d->type->d->signalOffset, 0);
}

QVariant QmlOpenMetaObject::value(const QByteArray &name) const
{
    QHash<QByteArray, int>::ConstIterator iter = d->type->d->names.constFind(name);
    if (iter == d->type->d->names.cend())
        return QVariant();

    return d->getData(*iter);
}

QVariant &QmlOpenMetaObject::operator[](const QByteArray &name)
{
    QHash<QByteArray, int>::ConstIterator iter = d->type->d->names.constFind(name);
    Q_ASSERT(iter != d->type->d->names.cend());

    return d->getData(*iter);
}

QVariant &QmlOpenMetaObject::operator[](int id)
{
    return d->getData(id);
}

void QmlOpenMetaObject::setValues(const QHash<QByteArray, QVariant> &data)
{
    QVector<QByteArray> newProperties;

    for (auto i = data.cbegin(), e = data.cend(); i != e; ++i) {
        auto iter = d->type->d->names.constFind(i.key());

        if (iter == d->type->d->names.cend())
            newProperties << i.key();
    }

    if (!newProperties.isEmpty())
        createProperties(newProperties);

    for (auto i = data.cbegin(), e = data.cend(); i != e; ++i) {
        auto iter = d->type->d->names.constFind(i.key());

        if (iter != d->type->d->names.cend()) {
            int id = *iter;
            const QVariant& val = i.value();

            QVariant &dataVal = d->getData(id);
            if (dataVal != val) {
                dataVal = val;
                activate(d->object, id + d->type->d->signalOffset, 0);
            }
        }
    }
}

void QmlOpenMetaObject::setValues(const QVector<QPair<QByteArray, QVariant>>& data)
{
    QVector<QByteArray> newProperties;

    for (auto i = data.cbegin(), e = data.cend(); i != e; ++i) {
        QHash<QByteArray, int>::ConstIterator iter = d->type->d->names.constFind(i->first);

        if (iter == d->type->d->names.cend())
            newProperties << i->first;
    }

    if (!newProperties.isEmpty())
        createProperties(newProperties);

    for (auto i = data.cbegin(), e = data.cend(); i != e; ++i) {
        auto iter = d->type->d->names.constFind(i->first);

        if (iter != d->type->d->names.cend()) {
            int id = *iter;
            const QVariant& val = i->second;

            QVariant &dataVal = d->getData(id);
            if (dataVal != val) {
                dataVal = val;
                activate(d->object, id + d->type->d->signalOffset, 0);
            }
        }
    }
}

bool QmlOpenMetaObject::setValue(const QByteArray &name, const QVariant &val)
{
    QHash<QByteArray, int>::ConstIterator iter = d->type->d->names.constFind(name);

    int id = -1;
    if (iter == d->type->d->names.cend()) {
        id = createProperty(name.constData(), "") - d->type->d->propertyOffset;
    } else {
        id = *iter;
    }

    if (id >= 0) {
        QVariant &dataVal = d->getData(id);
        if (dataVal == val)
            return false;

        dataVal = val;
        activate(d->object, id + d->type->d->signalOffset, 0);
        return true;
    }

    return false;
}

// returns true if this value has been initialized by a call to either value() or setValue()
bool QmlOpenMetaObject::hasValue(int id) const
{
    return d->hasData(id);
}

void QmlOpenMetaObject::setCached(bool c)
{
    if (c == d->cacheProperties || !d->type->d->engine)
        return;

    d->cacheProperties = c;

    QQmlData *qmldata = QQmlData::get(d->object, true);
    if (d->cacheProperties) {
        if (!d->type->d->cache)
#if QT_VERSION <= QT_VERSION_CHECK(5, 5, 1)
            d->type->d->cache = new QQmlPropertyCache(d->type->d->engine, this);
#elif QT_VERSION <= QT_VERSION_CHECK(5, 6, 3)
            d->type->d->cache = new QQmlPropertyCache(QV8Engine::getV4(d->type->d->engine), this);
#else
        d->type->d->cache = new QQmlPropertyCache(this);
#endif
        qmldata->propertyCache = d->type->d->cache;
        d->type->d->cache->addref();
    } else {
        if (d->type->d->cache)
            d->type->d->cache->release();
        qmldata->propertyCache = 0;
    }
}


int QmlOpenMetaObject::createProperty(const char *name, const char *)
{
    if (d->autoCreate) {
        int result = d->type->createProperty(name);

        if (QQmlData *ddata = QQmlData::get(d->object, /*create*/false)) {
            if (ddata->propertyCache) {
                ddata->propertyCache->release();
                ddata->propertyCache = 0;
            }
        }

        return result;
    } else
        return -1;
}

void QmlOpenMetaObject::createProperties(const QVector<QByteArray> &names)
{
    if (d->autoCreate) {
        d->type->createProperties(names);

        if (QQmlData *ddata = QQmlData::get(d->object, /*create*/false)) {
            if (ddata->propertyCache) {
                ddata->propertyCache->release();
                ddata->propertyCache = 0;
            }
        }
    }
}

void QmlOpenMetaObject::propertyRead(int)
{
}

void QmlOpenMetaObject::propertyWrite(int)
{
}

QVariant QmlOpenMetaObject::propertyWriteValue(int, const QVariant &value)
{
    return value;
}

void QmlOpenMetaObject::propertyWritten(int)
{
}

void QmlOpenMetaObject::propertyCreated(int, QMetaPropertyBuilder &)
{
}

QVariant QmlOpenMetaObject::initialValue(int)
{
    return QVariant();
}

int QmlOpenMetaObject::count() const
{
    return d->type->d->names.count();
}

QByteArray QmlOpenMetaObject::name(int idx) const
{
    Q_ASSERT(idx >= 0 && idx < d->type->d->names.count());

    return d->type->d->mob.property(idx).name();
}

QObject *QmlOpenMetaObject::object() const
{
    return d->object;
}
