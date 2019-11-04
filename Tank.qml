import QtQuick 2.0

Rectangle {
    property alias gunRotation: gun.rotation

    color: "yellow"
    antialiasing: true

    width: 70
    height: 50

    Rectangle {
        id: gun

        color: "red"
        antialiasing: true

        anchors.centerIn: parent
        anchors.horizontalCenterOffset: 30
        transformOrigin: Item.Left

        width: 60
        height: 15
    }
}
