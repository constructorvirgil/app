#ifndef CRC8_H
#define CRC8_H

#include <crcpro.h>

class Crc8 : public CrcPro
{
    Q_OBJECT
public:
    explicit Crc8(QObject *parent = 0);

protected:
    virtual uint32_t cal_crc_perbyte(uint32_t data);
    virtual uint32_t cal_crc_perbyte_toggle(uint32_t data);
signals:

public slots:
};

#endif // CRC8_H
