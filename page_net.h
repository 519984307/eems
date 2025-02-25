#ifndef PAGE_NET_H
#define PAGE_NET_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include "tool.h"

namespace Ui {
class page_net;
}

class page_net : public QWidget
{
    Q_OBJECT

public:
    explicit page_net(QWidget *parent = nullptr);
    ~page_net();

    //串口通信相关
    void setCurrentPort(QSerialPort** port);//设置已实例化的串口类
    void refreshSorts();//刷新串口设置
    void openPort();//选择当前串口并通信
    void setSerialPortUnit();

private:
    Ui::page_net *ui;
    QFont iconFont;
    QSerialPort* currentport=nullptr;
};

#endif // PAGE_NET_H
