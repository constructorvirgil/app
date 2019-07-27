#ifndef CRC8_FACTORY_H
#define CRC8_FACTORY_H

#include <crc_afactory.h>
#include "crc8.h"
class Crc8_Factory : public Crc_AFactory
{
    Q_OBJECT
public:
    explicit Crc8_Factory(QObject *parent = 0);
    virtual CrcPro * CreateCrc();
signals:

public slots:
};

#endif // CRC8_FACTORY_H
