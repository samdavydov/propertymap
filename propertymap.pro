QT += quick qml 
QT += core-private # for QMetaObjectBuilder
QT += qml-private  # for QQmlOpenMetaObject

CONFIG += c++11

SOURCES += \
    main.cpp \    
    Player.cpp \
    QuickPropertyMap/QuickPropertyMap.cpp \
    QmlPropertyMap/QmlPropertyMap.cpp \
    QmlPropertyMap/QmlOpenMetaObject.cpp \
    StaticPropertyMap/StaticPropertyMap.cpp \

HEADERS += \
    Player.h \
    QuickPropertyMap/QuickPropertyMap.h \
    QmlPropertyMap/QmlPropertyMap.h \
    QmlPropertyMap/QmlOpenMetaObject.h \
    StaticPropertyMap/StaticPropertyMap.h \

RESOURCES += \
    propertymap.qrc
