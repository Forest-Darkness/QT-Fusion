#include "widget.h"
#include "ui_widget.h"
#include <QImage>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushBtn_Depth_clicked()
{
    ui->label_src_data->clear();
    ui->label_src_data->setPixmap(QPixmap("./src_images/depth.png"));

    ui->label_dst_data->clear();
    ui->label_dst_data->setPixmap(QPixmap("./dst_images/depth_out.png"));

}

void Widget::on_pushBtn_Color_clicked()
{
    // Mat color_src = imread("./src_images/color.png", -1);
    // QImage img = QImage((const unsigned char*)(color_src.data),color_src.cols,color_src.rows, color_src.cols*color_src.channels(),  QImage::Format_RGB888);
    // ui->label_src_data->clear();
    // ui->label_src_data->setPixmap(QPixmap::fromImage(img));

    // Mat color_dst = imread("./dst_images/color_out.png", -1);
    // QImage img_dst = QImage((const unsigned char*)(color_dst.data),color_dst.cols,color_dst.rows, color_dst.cols*color_dst.channels(),  QImage::Format_RGB888);
    // ui->label_dst_data->clear();
    // ui->label_dst_data->setPixmap(QPixmap::fromImage(img_dst));

    ui->label_src_data->clear();
    ui->label_src_data->setPixmap(QPixmap("./src_images/color.png"));

    ui->label_dst_data->clear();
    ui->label_dst_data->setPixmap(QPixmap("./dst_images/color_out.png"));
}

void Widget::on_pushBtn_Left_clicked()
{
    ui->label_src_data->clear();
    ui->label_src_data->setPixmap(QPixmap("./src_images/inf1.png"));

    ui->label_dst_data->clear();
    ui->label_dst_data->setPixmap(QPixmap("./dst_images/inf1_out.png"));
}

void Widget::on_pushBtn_Right_clicked()
{
    ui->label_src_data->clear();
    ui->label_src_data->setPixmap(QPixmap("./src_images/inf2.png"));

    ui->label_dst_data->clear();
    ui->label_dst_data->setPixmap(QPixmap("./dst_images/inf2_out.png"));
}

void Widget::on_pushBtn_Heat_clicked()
{
    ui->label_src_data->clear();
    ui->label_src_data->setPixmap(QPixmap("./src_images/heat.jpg"));

    ui->label_dst_data->clear();
    ui->label_dst_data->setPixmap(QPixmap("./dst_images/heat_out.png"));
}

void Widget::on_pushBtn_Multi1_clicked()
{
    ui->label_src_data->clear();
    ui->label_src_data->setPixmap(QPixmap("./src_images/multi1.tif"));

    ui->label_dst_data->clear();
    ui->label_dst_data->setPixmap(QPixmap("./dst_images/multi1_out.tif"));
}

void Widget::on_pushBtn_Lidar_clicked()
{

}
