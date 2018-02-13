#ifndef CUSTOMBUTTONEX_H
#define CUSTOMBUTTONEX_H

#include "custombutton.h"

class CustomButtonEx : public CustomButton
{
    Q_OBJECT
public:
    CustomButtonEx(QWidget *parent);
protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // CUSTOMBUTTONEX_H
