#ifndef IMAGEPROCESS_H
#define IMAGEPROCESS_H

#include <QWidget>

namespace Ui {
class ImageProcess;
}

class ImageProcess : public QWidget
{
    Q_OBJECT

public:
    explicit ImageProcess(QWidget *parent = nullptr);
    ~ImageProcess();

private:
    Ui::ImageProcess *ui;
};

#endif // IMAGEPROCESS_H
