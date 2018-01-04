#include <QMessageBox>
#include <QDebug>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMessageBox msgBox;
    msgBox.setText(tr("The document has been modified"));
    msgBox.setInformativeText(tr("Doyou want to save your changes?"));
    msgBox.setDetailedText("Differences here...");
    msgBox.setStandardButtons(QMessageBox::Save
                               | QMessageBox::Discard
                               | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Save:
        qDebug() << "Save document!";
        break;
    case QMessageBox::Discard:
        qDebug() << "Discard changes!";
        break;
    case QMessageBox::Cancel:
        qDebug() << "Close document!";
        break;
    default:
        break;
    }

}

MainWindow::~MainWindow()
{

}
