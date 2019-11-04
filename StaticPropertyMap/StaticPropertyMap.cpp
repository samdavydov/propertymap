#include "StaticPropertyMap.h"

StaticPropertyMap::StaticPropertyMap(QObject* parent)
    : QObject(parent)
{}

void StaticPropertyMap::insert(const QByteArray& k, const QVariant& v)
{
    setProperty(k, v);
}
