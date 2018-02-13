#include "custombuttonex.h"

CustomButtonEx::CustomButtonEx(QWidget *parent)
    : CustomButton(parent)
{

}

void CustomButtonEx::mousePressEvent(QMouseEvent *event)
{
    event->ignore();
    qDebug() << "CustomButtonEx";
}
