#include "mainwindow.h"
#include "eventlabel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EventLabel *label = new EventLabel;
    label->setWindowTitle("MouseEvent Demo");
    label->resize(300, 200);
    label->setMouseTracking(true);
    label->show();

    return a.exec();
}
