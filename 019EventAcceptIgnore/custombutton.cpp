#include "custombutton.h"

CustomButton::CustomButton(QWidget *parent)
    : QPushButton(parent)
{

}

void CustomButton::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "CustomButton";
}
