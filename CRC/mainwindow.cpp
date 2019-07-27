#pragma execution_character_set("utf-8")
#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QMap>
#include <QString>
#include <sstream>

#include <QComboBox>
#include <QStatusBar>
#include <QDialog>

#include <QDebug>

#include "crcpro.h"
#include "crc_afactory.h"
#include "crc8_factory.h"
#include "crc16_factory.h"
#include "aboutdlg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    InfoMap_Init();



    //初始化组合框
    this->setFixedSize(580,660);
    ui->comboBox_pro->addItem("CRC-8");
    ui->comboBox_pro->addItem("CRC-8/ROHC");
    ui->comboBox_pro->addItem("CRC-8/MAXIM");
    ui->comboBox_pro->addItem("CRC-16/X25");
    ui->comboBox_pro->setCurrentIndex(0);

    //初始化状态栏
    QStatusBar * status = statusBar() ;
    setStatusBar(status);
    status_left = new QLabel("初始化成功",this);
    status->addWidget(status_left);
    status_right = new QLabel(ui->comboBox_pro->currentText(),this);
    status->addPermanentWidget(status_right);

    UpdateControl();

    //combobox change
    void (QComboBox:: * com_box_change)(int) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox_pro,com_box_change,this,[=](){
        UpdateControl();

        //status
        status_left->setText("");
        status_right->setText(ui->comboBox_pro->currentText());

    });

    //button clear
    connect(ui->pushButton_clear,&QPushButton::clicked,this,[=](){
        ui->textEdit_crc->setText("");
        //status
        status_left->setText("已清空结果");
    });

    //button cre
    connect(ui->pushButton_cre,&QPushButton::clicked,this,[=](){
        CrcPro * crcpro;
        //初始化CRC协议计算类
        if(nBits == 8){
            Crc_AFactory *pFactory = new Crc8_Factory();
            crcpro = pFactory->CreateCrc();
        }else if(nBits == 16){
            Crc_AFactory *pFactory = new Crc16_Factory();
            crcpro = pFactory->CreateCrc();
        }



        //生成CRC表
        crcpro->Init(isToggle,formula);
        uint32_t * table = crcpro->CreateTable();

        qDebug()<<"gen table ok";
        ui->textEdit_crc->clear();

        //显示到编辑框上
        if(nBits == 8){
            for( int i =0 ;i <= 0xFF;i++)
            {
                std::stringstream  ss;
                ss.fill('0'); //影响所有输出
                char code[2];
                itoa(table[i],code,16);
                ss<<"0x";
                ss.width(2);
                ss<<code<<" ";
                std::string s(ss.str());
                QString qstr =QString::fromStdString(ss.str());
                ui->textEdit_crc->insertPlainText(qstr);
            }
        }else if(nBits == 16){
            for( int i =0 ;i <= 0xFF;i++)
            {
                std::stringstream  ss;
                ss.fill('0'); //影响所有输出
                char code[2];
                itoa(table[i],code,16);
                ss<<"0x";
                ss.width(4);
                ss<<code<<" ";
                std::string s(ss.str());
                QString qstr =QString::fromStdString(ss.str());
                ui->textEdit_crc->insertPlainText(qstr);
            }
        }

        //status
        status_left->setText("结果已更新");
    });

    //button copy
    connect(ui->pushButton_copy,&QPushButton::clicked,this,[=](){
        ui->textEdit_crc->selectAll();
        ui->textEdit_crc->copy();

        //status
        status_left->setText("拷贝成功");
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InfoMap_Init()
{
    crc_info info;

    //CRC-8
    info.isToggle = false;
    info.init = 0x00;
    info.endXor = 0x00;
    info.formula = 0x07;
    map["CRC-8"]=info;

    //CRC-8/MAXIM
    info.isToggle = true;
    info.init = 0x00;
    info.endXor = 0x00;
    info.formula = 0x8C;
    map["CRC-8/MAXIM"]=info;

    //CRC-8/ROHC
    info.isToggle = true;
    info.init = 0xFF;
    info.endXor = 0x00;
    info.formula = 0xE0;
    map["CRC-8/ROHC"]=info;

    //CRC-16/X25
    info.isToggle = true;
    info.init = 0xFFFF;
    info.endXor = 0xFFFF;
    info.formula = 0x8408;
    map["CRC-16/X25"]= info;
}

void MainWindow::UpdateInfo(QString pro)
{
    this->isToggle = map[pro].isToggle;
    this->init = map[pro].init;
    this->endXor = map[pro].endXor;
    this->formula = map[pro].formula;

}

void MainWindow::UpdateControl()
{
    QString cur_text = ui->comboBox_pro->currentText();
    UpdateInfo(cur_text);

    if(ui->comboBox_pro->currentIndex()<3){
        nBits = 8;
    }else{
        nBits = 16;
    }

    //edit _ toggle
    ui->lineEdit_isToggle->setText((isToggle)?"是":"否");

    //edit _ init
    char  str_init[32]={0};
    strcpy(str_init,"0x");
    itoa(init,str_init+2,16);
    ui->lineEdit_init->setText(str_init);

    //edit _ endXor
    char  str_endXor[32]={0};
    strcpy(str_endXor,"0x");
    itoa(endXor,str_endXor+2,16);
    ui->lineEdit_endXor->setText(str_endXor);

}

void MainWindow::on_actionAbout_triggered()
{
    AboutDlg aboutdlg;
    aboutdlg.exec();
}
