#ifndef CRC16_FACTORY_H
#define CRC16_FACTORY_H

#include <crc_afactory.h>
#include "crc16.h"
class Crc16_Factory : public Crc_AFactory
{
    Q_OBJECT
public:
    explicit Crc16_Factory(QObject *parent = 0);
    virtual CrcPro * CreateCrc();
signals:

public slots:
};

#endif // CRC16_FACTORY_H
