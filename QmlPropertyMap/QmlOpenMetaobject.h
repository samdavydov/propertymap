#pragma once

#include <QtCore/QMetaObject>
#include <QtCore/QObject>

#include <private/qqmlrefcount_p.h>
#include <private/qqmlcleanup_p.h>
#include <private/qobject_p.h>

class QQmlEngine;
class QMetaPropertyBuilder;
class QmlOpenMetaObjectTypePrivate;
class QmlOpenMetaObjectType : public QQmlRefCount, public QQmlCleanup
{
public:
    QmlOpenMetaObjectType(const QMetaObject *base, QQmlEngine *engine);
    ~QmlOpenMetaObjectType();

    void createProperties(const QVector<QByteArray> &names);
    int createProperty(const QByteArray &name);

    int propertyOffset() const;
    int signalOffset() const;

    int propertyCount() const;
    QByteArray propertyName(int) const;
    QMetaObject *metaObject() const;

protected:
    virtual void propertyCreated(int, QMetaPropertyBuilder &);
    virtual void clear();

private:
    QmlOpenMetaObjectTypePrivate *d;
    friend class QmlOpenMetaObject;
    friend class QmlOpenMetaObjectPrivate;
};

class QmlOpenMetaObjectPrivate;
class QmlOpenMetaObject : public QAbstractDynamicMetaObject
{
public:
    QmlOpenMetaObject(QObject *, const QMetaObject * = 0, bool = true);
    QmlOpenMetaObject(QObject *, QmlOpenMetaObjectType *, bool = true);
    ~QmlOpenMetaObject();

    QVariant value(const QByteArray &) const;
    void setValues(const QHash<QByteArray, QVariant> &);
    void setValues(const QVector<QPair<QByteArray, QVariant> > &);
    bool setValue(const QByteArray &, const QVariant &);
    QVariant value(int) const;
    void setValue(int, const QVariant &);
    QVariant &operator[](const QByteArray &);
    QVariant &operator[](int);
    bool hasValue(int) const;

    int count() const;
    QByteArray name(int) const;

    QObject *object() const;
    virtual QVariant initialValue(int);

    // Be careful - once setCached(true) is called createProperty() is no
    // longer automatically called for new properties.
    void setCached(bool);

    QmlOpenMetaObjectType *type() const;

    void emitPropertyNotification(const QByteArray &propertyName);

protected:
    virtual int metaCall(QObject *o, QMetaObject::Call _c, int _id, void **_a);
    virtual int createProperty(const char *, const char *);
    void createProperties(const QVector<QByteArray> &names);

    virtual void propertyRead(int);
    virtual void propertyWrite(int);
    virtual QVariant propertyWriteValue(int, const QVariant &);
    virtual void propertyWritten(int);
    virtual void propertyCreated(int, QMetaPropertyBuilder &);

    QAbstractDynamicMetaObject *parent() const;

private:
    QmlOpenMetaObjectPrivate *d;
    friend class QmlOpenMetaObjectType;
};
