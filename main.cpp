#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDir>
#include "backend.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QString working_path = "~";
    QString cmd = "~/anaconda/bin/jupyter-notebook";
    QString path = "/";
    QDir::setCurrent(working_path);
    Backend bkd(cmd, path);
    engine.rootContext()->setContextProperty("bkd", &bkd);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
