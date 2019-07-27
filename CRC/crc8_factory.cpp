#include "crc8_factory.h"

Crc8_Factory::Crc8_Factory(QObject *parent) : Crc_AFactory(parent)
{

}

CrcPro *Crc8_Factory::CreateCrc()
{
    return new Crc8();
}
