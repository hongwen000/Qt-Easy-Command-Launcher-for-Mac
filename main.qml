import QtQuick 2.6
import QtQuick.Controls 2.2
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Easy Launcher ver1.0")

    MainForm {
        button1.onClicked: {
            bkd.open_floder()
}
        button.onClicked: {
            bkd.start_cmd()
}
        anchors.fill: parent
    }
}
