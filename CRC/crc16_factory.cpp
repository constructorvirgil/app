#include "crc16_factory.h"

Crc16_Factory::Crc16_Factory(QObject *parent) : Crc_AFactory(parent)
{

}

CrcPro *Crc16_Factory::CreateCrc()
{
    return new Crc16();
}
