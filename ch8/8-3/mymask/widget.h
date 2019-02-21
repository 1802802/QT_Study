﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

protected:  //添加两个事件
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);

};

#endif // WIDGET_H