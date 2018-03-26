#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>
#include <QProcess>

class Backend : public QObject
{
    Q_OBJECT
public:
    Backend(const QString& _cmd, const QString& _path = "/") : cmd(_cmd), path(_path) {}
    Q_INVOKABLE void start_cmd();
    Q_INVOKABLE void open_floder();
    QString cmd;
    QString path;
};

#endif // BACKEND_H
