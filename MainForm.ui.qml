import QtQuick 2.6
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.0

Rectangle {
    property alias mouseArea: mouseArea

    width: 360
    height: 360
    property alias button1: button1
    property alias button: button

    MouseArea {
        id: mouseArea
        anchors.fill: parent

        Button {
            id: button
            x: 46
            y: 160
            text: "Start Command"
            anchors.horizontalCenterOffset: -60
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }

        Button {
            id: button1
            x: 215
            y: 160
            text: qsTr("Open Folder")
            anchors.horizontalCenterOffset: 60
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }
    }
}
