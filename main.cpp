#include <QCoreApplication>
#include <QScopedPointer>
#include <QDebug>
#include "test.h"

void doStuff() {
    QScopedPointer<test> t(new test());

    qInfo() << t.data();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    doStuff();

    return a.exec();
}
