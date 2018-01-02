#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QMessageBox>
#include <QDebug>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Open File");

    openAction = new QAction(QIcon(":/images/doc-open"), tr("&open..."), this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    statusBar();
}

MainWindow::~MainWindow()
{

}
/*
void MainWindow::open()
{
    QMessageBox::information(this, tr("Information"), tr("Open"));
}
*/

//使用应用程序级别的模态对话框Dialog代替MessageBox
void MainWindow::open()
{
    QDialog dialog(this);
    dialog.setWindowTitle("Hello, dialog!");
    dialog.exec();
    qDebug() << dialog.result();
}

/*
//非模态对话框
void MainWindow::open()
{
    QDialog *dialog = new QDialog;
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->setWindowTitle("Hello, dialog");
    dialog->show();
}
*/
