#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>
#include <QDebug>

class CustomButton : public QPushButton
{
    Q_OBJECT
public:
    CustomButton(QWidget *parent);

protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // CUSTOMBUTTON_H
