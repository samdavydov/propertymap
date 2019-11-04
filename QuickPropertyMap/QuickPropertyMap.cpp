#include "QuickPropertyMap.h"
#include <private/qmetaobjectbuilder_p.h>

QuickPropertyMap::QuickPropertyMap(QObject *parent)
    : QuickPropertyMapBase(parent)
{
    buildMetaObject(); // NOTE: build an empty valid QMetaObject
}

QuickPropertyMap::~QuickPropertyMap()
{
    free(m_metaObject); // NOTE: because of malloc deep inside QMetaObectBuilder
}

void QuickPropertyMap::addProperty(const QByteArray& name, const QVariant& value, int type)
{
    if (!m_finalized)
        m_propertyList.append(DynamicProperty{name, value, type});
}

void QuickPropertyMap::build()
{
    if (!m_finalized)
    {
        m_finalized = true;
        buildMetaObject();
    }
}

void QuickPropertyMap::insert(int i, const QVariant& value)
{
    if (i >= 0 && i < m_propertyList.count())
    {
        DynamicProperty& p = m_propertyList[i];

        if (p.value != value)
        {
            p.value = value;
            QMetaObject::activate(this, m_metaObject, i, nullptr);
        }
    }
}

void QuickPropertyMap::buildMetaObject()
{
    free(m_metaObject);
    QMetaObjectBuilder builder;

    builder.setClassName("QuickPropertyMap");
    builder.setSuperClass(&QuickPropertyMapBase::staticMetaObject);

    for (const DynamicProperty& dynamicProperty: m_propertyList)
    {
        QMetaPropertyBuilder propertyBuilder = builder.addProperty(dynamicProperty.name, QMetaType::typeName(dynamicProperty.typeId));
        QMetaMethodBuilder   signalBuilder   = builder.addSignal(dynamicProperty.name + "сhanged()");

        propertyBuilder.setWritable(true);
        propertyBuilder.setNotifySignal(signalBuilder);
    }

    m_metaObject = builder.toMetaObject();

    // NOTE: build an index cache for faster lookups
    for (int i = 0; i != m_propertyList.count(); ++i)
        m_propertyIndex.insert(m_propertyList[i].name, i);
}

const QMetaObject* QuickPropertyMap::metaObject() const
{
    return m_metaObject;
}

int QuickPropertyMap::my_metacall(QMetaObject::Call call, int id, void** argv)
{
    switch (call)
    {
        case QMetaObject::ReadProperty:
        {
            const DynamicProperty& property = m_propertyList[id];
            QMetaType::construct(property.typeId, argv[0], property.value.data());
        }
        break;

        case QMetaObject::WriteProperty:
        {
            DynamicProperty& p = m_propertyList[id];
            QVariant value(p.typeId, argv[0]);

            if (p.value != value)
            {
                p.value = value;
                QMetaObject::activate(this, m_metaObject, id, nullptr);

                emit valueChanged(p.name, p.value);
            }
        }
        break;

        default: break;
    }

    return -1;
}

int QuickPropertyMap::qt_metacall(QMetaObject::Call call, int id, void** argv)
{
    const int realId = id - m_metaObject->propertyOffset();
    return (realId >= 0) ? my_metacall(call, realId, argv) : QuickPropertyMapBase::qt_metacall(call, id, argv);
}

void* QuickPropertyMap::qt_metacast(const char* name)
{
    return (strcmp(name, m_metaObject->className()) == 0) ? this : QuickPropertyMapBase::qt_metacast(name);
}
