#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QDebug>

class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CustomWidget(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
};

#endif // CUSTOMWIDGET_H
