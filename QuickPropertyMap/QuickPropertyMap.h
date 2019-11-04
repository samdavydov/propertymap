#pragma once

#include <QObject>
#include <QVector>
#include <QVariant>

class QuickPropertyMapBase : public QObject
{
    Q_OBJECT

public:
    explicit QuickPropertyMapBase(QObject* parent = nullptr) : QObject(parent){}
    ~QuickPropertyMapBase() override {}

signals:
    void valueChanged(const QByteArray& name, const QVariant& value);
};

class QuickPropertyMap : public QuickPropertyMapBase
{
    // Meta-object system functions
public:
    const QMetaObject *metaObject() const override;
    void *qt_metacast(const char *) override;
    int qt_metacall(QMetaObject::Call, int, void **) override;

public:
    explicit QuickPropertyMap(QObject* parent = nullptr);
    ~QuickPropertyMap() override;

public:
    /**
     * Appends a property to the property list
     * Has no effect after build() is called
     *
     * Two-argument version uses value.userType() as a property type
     *
     * Call build() to create a metaobject and finish QuickPropertyMap creation
     */
    void addProperty(const QByteArray& name, const QVariant& value, int type);
    void addProperty(const QByteArray& name, const QVariant& value) { addProperty(name, value, value.userType()); }

    /**
     * @brief Builds a QMetaObject from the property list accumulated by addProperty() calls
     */
    void build();

public:
    /**
     * @brief updates property at 'index' with 'value'
     * @param index
     * @param value
     */
    void insert(int index, const QVariant& value);
    void insert(const QByteArray& name, const QVariant& value) { insert(indexOf(name), value); }

public:
    int count()                           const { return m_propertyIndex.count();         }
    int indexOf(const QByteArray& name)   const { return m_propertyIndex.value(name, -1); }
    bool contains(const QByteArray& name) const { return m_propertyIndex.contains(name);  }
    QByteArrayList keys()                 const { return m_propertyIndex.keys();          }

    const QByteArray& name (int index) const { return m_propertyList[index].name;  }
    const QVariant&   value(int index) const { return m_propertyList[index].value; }
    int               type (int index) const { return m_propertyList[index].typeId;}

    QVariant value(const QByteArray& name) const { int i = indexOf(name); return (i != -1) ? value(i) : QVariant(); }

private:
    int my_metacall(QMetaObject::Call call, int id, void** argv);
    void buildMetaObject();

private:
    using DynamicProperty = struct {
        QByteArray name;
        QVariant   value;
        int        typeId;
    };

    QMetaObject* m_metaObject = nullptr;
    bool         m_finalized  = false;

    QHash<QByteArray, int>   m_propertyIndex;
    QVector<DynamicProperty> m_propertyList;
};
