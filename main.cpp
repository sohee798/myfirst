#include "gvobjwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gvobjwidget w;
    w.show();
    return a.exec();
}

