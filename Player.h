#pragma once

#include <QQuickView>

class QTimer;

class StaticPropertyMap;
class QmlPropertyMap;
class QuickPropertyMap;

//using PropertyMap = StaticPropertyMap;
//using PropertyMap = QmlPropertyMap;

#define QUICKPROPERTYMAP
using PropertyMap = QuickPropertyMap;

class Player : public QQuickView
{
    Q_OBJECT

public:
    explicit Player(QWindow* parent = nullptr);

public:
    void advance();

public:
    void test1();
    void test2();
    void test3();

private:
    PropertyMap* m_propertyMap;
    QVector<double> m_speed;
    QVector<QPair<QByteArray, QVariant>> m_data;
    QTimer* m_timer;
    int m_step;
};
