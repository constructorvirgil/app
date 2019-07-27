#ifndef CRC16_H
#define CRC16_H

#include <crcpro.h>

class Crc16 : public CrcPro
{
    Q_OBJECT
public:
    explicit Crc16(QObject *parent = 0);

protected:
    virtual uint32_t cal_crc_perbyte(uint32_t data);
    virtual uint32_t cal_crc_perbyte_toggle(uint32_t data);

signals:

public slots:
};

#endif // CRC16_H
