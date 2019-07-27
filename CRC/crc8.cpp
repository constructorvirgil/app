#include "crc8.h"

Crc8::Crc8(QObject *parent) : CrcPro(parent)
{

}


//每字节计算crc检验码(不带翻转)
uint32_t Crc8::cal_crc_perbyte(uint32_t data)
{
    uint8_t crc = data & 0xFF;

    for (int i = 0; i < 8; i++)
    {
        if (crc & 0x80)
        {
            crc = (crc << 1) ^ (formula & 0xFF);
        }
        else
        {
            crc = crc << 1;
        }
    }
    return crc;
}

uint32_t Crc8::cal_crc_perbyte_toggle(uint32_t data)
{
    uint8_t crc = data &0xFF ;

    for (int i = 0; i < 8; i++)
    {
        if (crc & 0x01)
        {
            //由原来的 1 0000 0111‬(0x07) 翻转成  1 1110 0000‬(0xE0)
            //注意最高位的1是不加入翻转过程的
            crc = (crc >> 1) ^ (formula & 0xFF);
        }
        else
        {
            crc = crc >> 1;
        }
    }
    return crc;
}
