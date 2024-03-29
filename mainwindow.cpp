#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdir.h>
#include <qdebug.h>
#include "evdev_read/evdev_read.h"

inputReadThread::inputReadThread(QString input_dev) :
    running(true),
    fd(-1)
{
    char *dev_name = input_dev.toLatin1().data();
    fd = evdev_init(dev_name);
}

void inputReadThread::stop()
{
    running = false;
}

void inputReadThread::run()
{
    qDebug() << "start running";
    if (fd >= 0) {
        while(running && fd >= 0) {
            char *buf = evdev_read(fd);
            if (buf) {
                QString str = QString::fromLatin1(buf);
                emit input_read(str);
            }
        }
        evdev_close(fd);
        fd = -1;
    }
    qDebug() << "stop running";
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    thread(NULL),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList gpio_dev_list;
    QFile file("/proc/bus/input/devices");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "file open failed";
    } else {
        QString tmp = file.readAll();
        int flag = 0;
        QStringList list = tmp.split("\n");
        foreach(QString str_line, list) {
            str_line = str_line.trimmed();
            if (str_line.startsWith("P:")) {
                if (str_line.contains("gpio-keys")) {
                    flag = 1;
                }
            }
            if (flag == 1) {
                if (str_line.startsWith("H:")) {
                    str_line = str_line.section("=", 1, 1);
                    QStringList nodes = str_line.split(' ');
                    foreach(QString node, nodes) {
                        if (node.contains("event")) {
                            gpio_dev_list.append(node.trimmed());
                            flag = 0;
                            break;
                        }
                    }
                    continue;
                }
            }
        }
    }
    qDebug() << "gpio dev list: " << gpio_dev_list;

    QDir dir("/dev/input");
    QStringList input_dev = dir.entryList(QDir::System);
    qDebug() << "all input dev: " << input_dev;
    for (int i = 0; i < input_dev.size(); ++i) {
        QString one = input_dev.at(i).trimmed();
        if (gpio_dev_list.contains(one)) {
            ui->comboBox->addItem(one);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);

    qDebug() << endl << "Window Resize:" << this->size();

    // 屏幕长宽
    QList<QScreen*> scr = QGuiApplication::screens();
    QRect rect = scr.at(0)->geometry();
    quint32 desktop_wid = rect.width();
    quint32 desktop_hei = rect.height();

    // 根据不同屏幕分辨率, 调节字体大小
    QString style_str;
    quint32 font_size = 10;
    if (desktop_wid >= 1280 && desktop_hei >= 720) {
        qDebug() << "1280*720";
        font_size = 28;
        style_str = QString("font: %1pt \"WenQuanYi Micro Hei Mono\";").arg(font_size);
    } else if (desktop_wid >= 800 && desktop_hei >= 600) {
        qDebug() << "800*600";
        font_size = 10;
        style_str = QString("font: 10pt \"WenQuanYi Micro Hei Mono\";").arg(font_size);
    }

    ui->comboBox->setStyleSheet(style_str);
    ui->pushButton->setStyleSheet(style_str);
    ui->pushButton_2->setStyleSheet(style_str);
    ui->textEdit->setStyleSheet(style_str);
}

void MainWindow::get_input(QString str)
{
    ui->textEdit->append(str);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->clear();
    if (thread != NULL) {
        disconnect(thread, SIGNAL(input_read(QString)), this, SLOT(get_input(QString)));
        thread->stop();
        thread->wait();
    }
    qDebug() << "on_comboBox_currentIndexChanged: " << arg1;
    thread = new inputReadThread("/dev/input/" + arg1.trimmed());
    connect(thread, SIGNAL(input_read(QString)), this, SLOT(get_input(QString)));
    thread->start();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event = event;
    if (thread != NULL) {
        thread->stop();
        thread->wait();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
}

void MainWindow::on_pushButton_clicked()
{
    close();
}
