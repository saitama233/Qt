#include "customwidget.h"

CustomWidget::CustomWidget(QWidget *parent) : QWidget(parent)
{

}

void CustomWidget::mousePressEvent(QMouseEvent *event) {
    QWidget::mousePressEvent(event);
    qDebug() << "CustomWidget";
}
