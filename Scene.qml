import QtQuick 2.0

Rectangle {
    id: scene
    color: "black"
    
    property real a: 0.5
       
    focus: true
    
    property int index: 0
    
    Keys.onPressed: {
        if (event.key === Qt.Key_A)
            ngi["x_"+index] -= 1
        else if (event.key === Qt.Key_D)
            ngi["x_"+index] += 1
        else if (event.key === Qt.Key_W)
            ngi["y_"+index] -= 1
        else if (event.key === Qt.Key_S)
            ngi["y_"+index] += 1
        else if (event.key === Qt.Key_E)
            ngi["r_"+index] += 1
        else if (event.key === Qt.Key_Q)
            ngi["r_"+index] -= 1
    }

    Text {
        id: fps
        text: ngi.fps
        font.pointSize: 108
        font.bold: true
        anchors.centerIn: parent
        color: "magenta"
        z: 1
    }

    Text {
        text: "%1: %2 properties".arg(ngi.title).arg(ngi.count * 3)
        font.pointSize: 42
        font.bold: true

        anchors {
            top: parent.top
            left: parent.left
            topMargin: 20
            leftMargin: 20
        }

        color: "magenta"
        z: 1
    }

    Repeater {
        model: ngi.count

        Tank {
            scale: 0.5
            x: (scene.width  - width ) * 0.5 + ngi["x_%1".arg(index)] * a
            y: (scene.height - height) * 0.5 + ngi["y_%1".arg(index)] * a
            rotation: ngi["r_%1".arg(index)]
        }
    }
}
