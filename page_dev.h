#ifndef PAGE_DEV_H
#define PAGE_DEV_H

#include <QWidget>
#include "tool.h"

namespace Ui {
class page_dev;
}

class page_dev : public QWidget
{
    Q_OBJECT

public:
    explicit page_dev(QWidget *parent = nullptr);
    ~page_dev();
    void setTitle(bool isLogin=false);

private:
    Ui::page_dev *ui;
    QFont iconFont;
};

#endif // PAGE_DEV_H
