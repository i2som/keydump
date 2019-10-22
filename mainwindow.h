#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QFile>
#include <QThread>

class inputReadThread : public QThread
{
    Q_OBJECT
public:
    inputReadThread(QString input_dev);
    void stop();

protected:
    void run();

private:
    QFile *file;
    volatile bool running;
    int fd;

signals:
    void input_read(QString str);
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void get_input(QString str);
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    inputReadThread *thread;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
