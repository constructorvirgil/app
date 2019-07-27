#include "aboutdlg.h"
#include "ui_aboutdlg.h"

AboutDlg::AboutDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDlg)
{
    ui->setupUi(this);
    this->setFixedSize(370,200);
}

AboutDlg::~AboutDlg()
{
    delete ui;
}
