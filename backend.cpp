#include "backend.h"

void Backend::start_cmd()
{
    QString aScript =
            "tell application \"iTerm2\"\n"
            "create window with default profile command \""
            + cmd +
            "\"\n"
          "end tell\n";

    QString osascript = "/usr/bin/osascript";
     QStringList processArguments;
     processArguments << "-l" << "AppleScript";

    QProcess p;
     p.start(osascript, processArguments);
     p.write(aScript.toUtf8());
     p.closeWriteChannel();
     p.waitForReadyRead(-1);
}

void Backend::open_floder()
{
    QString aScript =
            "tell application \"Finder\" to open (\""
            + path +
            "\" as POSIX file)";


    QString osascript = "/usr/bin/osascript";
     QStringList processArguments;
     processArguments << "-l" << "AppleScript";

    QProcess p;
     p.start(osascript, processArguments);
     p.write(aScript.toUtf8());
     p.closeWriteChannel();
     p.waitForReadyRead(-1);
}
