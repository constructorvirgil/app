#include "crc16.h"

Crc16::Crc16(QObject *parent) : CrcPro(parent)
{

}


uint32_t Crc16::cal_crc_perbyte(uint32_t data)
{
    uint16_t crc = data & 0xFFFF;

    for (int i = 0; i < 8; i++)
    {
        if (crc & 0x8000)
        {
            crc = (crc << 1) ^ (formula & 0xFFFF);
        }
        else
        {
            crc = crc << 1;
        }
    }
    return crc;
}

uint32_t Crc16::cal_crc_perbyte_toggle(uint32_t data)
{
    uint16_t crc = data &0xFFFF ;

    for (int i = 0; i < 8; i++)
    {
        if (crc & 0x01)
        {
            //由原来的 1 0000 0111‬(0x07) 翻转成  1 1110 0000‬(0xE0)
            //注意最高位的1是不加入翻转过程的
            crc = (crc >> 1) ^ (formula & 0xFFFF);
        }
        else
        {
            crc = crc >> 1;
        }
    }
    return crc;
}

