#include "crcpro.h"
#include <QDebug>
CrcPro::CrcPro(QObject *parent) : QObject(parent)
{

}

void CrcPro::Init(bool istoggle, uint32_t formula)
{
    this->isToggle = istoggle;
    this->formula = formula;
}

uint32_t * CrcPro::CreateTable()
{
    for( int i = 0x00 ;i <= 0xFF ; i++ )
    {
        if(this->isToggle==true){
           crc_table[i] = cal_crc_perbyte_toggle(i);
        }else{
           crc_table[i] = cal_crc_perbyte(i);
        }
    }
    return crc_table;
}







