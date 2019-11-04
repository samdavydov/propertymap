#include "StaticPropertyMap.h"
#include <QVariantMap>

#include <QDebug>

StaticPropertyMap::StaticPropertyMap(QObject* parent)
    : QObject(parent)
{}

void StaticPropertyMap::insert(const QVariantMap& data)
{
    for (auto i = data.constBegin(), e = data.constEnd(); i != e; ++i)
        insert(i.key().toLatin1(), i.value());
}

void StaticPropertyMap::insert(const QHash<QByteArray, QVariant>& data)
{
    for (auto i = data.constBegin(), e = data.constEnd(); i != e; ++i)
        insert(i.key(), i.value());
}

void StaticPropertyMap::insert(const QByteArray& k, const QVariant& v)
{
    setProperty(k, v);
}
