#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

struct crc_info{
    bool isToggle;
    uint32_t init;
    uint32_t endXor;
    uint32_t formula;
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



private slots:
    void on_actionAbout_triggered();

private:

    std::map <QString,crc_info> map;
    Ui::MainWindow *ui;

    bool isToggle;
    uint32_t init;
    uint32_t endXor;
    uint32_t formula; //生成多项式
    QLabel * status_left;
    QLabel * status_right;
    int nBits;

    void InfoMap_Init(void);
    void UpdateInfo(QString pro);
    void UpdateControl( void );
};

#endif // MAINWINDOW_H
