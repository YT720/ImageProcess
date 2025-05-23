#include "ImageProcess.h"
#include "ui_ImageProcess.h"

ImageProcess::ImageProcess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageProcess)
{
    ui->setupUi(this);
}

ImageProcess::~ImageProcess()
{
    delete ui;
}
