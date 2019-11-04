#include "Player.h"

#include <QElapsedTimer>
#include <QTimer>
#include <QtMath>
#include <QQmlContext>

#include "QmlPropertyMap/QmlPropertyMap.h"
#include "QuickPropertyMap/QuickPropertyMap.h"
#include "StaticPropertyMap/StaticPropertyMap.h"

#define UNUSED_FUNCTION(x) void (*__##x)(x&, const PairData&) = &init; (void)__##x;

namespace
{
    const int COUNT = 1000;
    const double R = 6;

    double posX(int i, double angle) { return (i / 3) * R * cos(angle * M_PI / 180) + 10; }
    double posY(int i, double angle) { return (i / 3) * R * sin(angle * M_PI / 180) + 10; }

    using PairData = QVector<QPair<QByteArray, QVariant>>;

    void init(StaticPropertyMap& pm, const PairData& data)
    {
        for (const auto& i : data)
            pm.insert(i.first, i.second);
    }

    void init(QmlPropertyMap& pm, const PairData& data)
    {
        for (const auto& i : data)
            pm.insert(i.first, i.second);
    }

    void init(QuickPropertyMap& pm, const PairData& data)
    {
        for (const auto& i : data)
            pm.addProperty(i.first, i.second);

        pm.build();
    }
}

Player::Player(QWindow* parent)
    : QQuickView(parent)
    , m_propertyMap(new PropertyMap(this))
    , m_timer(new QTimer(this))
    , m_step(0)
{
    UNUSED_FUNCTION(StaticPropertyMap)
    UNUSED_FUNCTION(QmlPropertyMap)
    UNUSED_FUNCTION(QuickPropertyMap)

    setResizeMode(QQuickView::SizeRootObjectToView);

    m_data.resize(3 * COUNT);
    m_speed.resize(COUNT);

    for (int i = 0; i != COUNT; ++i)
    {
        m_data[3 * i + 0] = {QString("x_%1").arg(i).toLatin1(), 0.0};
        m_data[3 * i + 1] = {QString("y_%1").arg(i).toLatin1(), 0.0};
        m_data[3 * i + 2] = {QString("r_%1").arg(i).toLatin1(), 0.0};

        m_speed[i] = 1.0 * qrand() / RAND_MAX + 0.1;
    }

    m_data.append({QByteArray("count"), COUNT});
    m_data.append({QByteArray("fps")  , 0    });
    m_data.append({QByteArray("title"), m_propertyMap->metaObject()->className()});

    init(*m_propertyMap, m_data);
    rootContext()->setContextProperty("ngi", m_propertyMap);

    test1();
    test2();
    test3();
}

void Player::test1()
{
    connect(m_timer, &QTimer::timeout, this, &Player::advance);
    m_timer->start(16);
}

void Player::test2()
{
    connect(m_propertyMap, &PropertyMap::valueChanged, [](const QString& name, const QVariant& value)
    {
        qDebug() << name << value;
    });
}

void Player::test3()
{
    qInfo("feeding %s:", m_propertyMap->metaObject()->className());

    for (int size : QVector<int>{1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000})
    {
        PairData data(size);
        for (int i = 0; i != size; ++i)
            data[i] = {QStringLiteral("x_%1").arg(i).toLatin1(), 0.0};

        PropertyMap p;

        QElapsedTimer t;
        t.start();

        init(p, data);

        qInfo("%d %lld", size, t.elapsed());
    }
}

void Player::advance()
{
    QElapsedTimer t;
    t.start();

    ++m_step;

    for (int i = 0; i != COUNT; ++i)
    {
        double angle = m_step * m_speed[i];

        m_propertyMap->insert(m_data[3 * i + 0].first, posX(i, angle));
        m_propertyMap->insert(m_data[3 * i + 1].first, posY(i, angle));
        m_propertyMap->insert(m_data[3 * i + 2].first, angle + 90);
    }

    if (m_step % 10 == 0)
        m_propertyMap->insert("fps", int(1000.0 / (t.nsecsElapsed() / 1000000.0)));
}
