#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushBtn_Depth_clicked();

    void on_pushBtn_Color_clicked();

    void on_pushBtn_Left_clicked();

    void on_pushBtn_Right_clicked();

    void on_pushBtn_Heat_clicked();

    void on_pushBtn_Multi1_clicked();

    void on_pushBtn_Lidar_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
