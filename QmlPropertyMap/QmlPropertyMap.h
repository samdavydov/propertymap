/*
 *  Полностью повторяет QQmlPropertyMap
 *
 *  Добавлен метод insert(const QVariantMap&), значительно ускоряющий вставку больших (>100) наборов параметров.
 *  Также, значительно ускорен contains(const QString&) путем введения явного хранилища ключей QSet вместо линейного поиска в таблице имен.
 *  Поскольку имена свойств никогда не меняются, то, в действительности, хранится только один набор содержимого строк (implicit sharing)
 *
 *  Данная реализация использует private-заголовки Qt, поэтому компоновка должна выполнятся в пределах одной версии Qt.
*/

#pragma once

#include <QtQml/qtqmlglobal.h>

#include <QtCore/QObject>
#include <QtCore/QHash>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

class QmlPropertyMapPrivate;
class QmlPropertyMap : public QObject
{
    Q_OBJECT

public:
    using FastData = QHash<QByteArray, QVariant>;
    using PairData = QVector<QPair<QByteArray, QVariant>>;

public:
    explicit QmlPropertyMap(QObject *parent = Q_NULLPTR);
    virtual ~QmlPropertyMap();

    QVariant value(const QString &key) const;
    void clear(const QString &key);

    void insert(const QString &key, const QVariant &value);
    void insert(const QVariantMap &data);
    void insert(const FastData& data);
    void insert(const PairData& data);

    void setCached(bool cached);

    Q_INVOKABLE const QStringList& keys() const;

    int count() const;
    int size() const;
    bool isEmpty() const;
    bool contains(const QString &key) const;

    QVariant &operator[](const QString &key);
    QVariant operator[](const QString &key) const;

Q_SIGNALS:
    void valueChanged(const QString &key, const QVariant &value);

protected:
    virtual QVariant updateValue(const QString &key, const QVariant &input);

    template<class DerivedType>
    QmlPropertyMap(DerivedType *derived, QObject *parentObj)
        : QObject(*allocatePrivate(), parentObj)
    {
        Q_UNUSED(derived)
        init(&DerivedType::staticMetaObject);
    }

private:
    void init(const QMetaObject *staticMetaObject);
    static QObjectPrivate *allocatePrivate();

    Q_DECLARE_PRIVATE(QmlPropertyMap)
    Q_DISABLE_COPY(QmlPropertyMap)
};
