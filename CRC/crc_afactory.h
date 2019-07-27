#ifndef CRC_AFACTORY_H
#define CRC_AFACTORY_H

#include <QObject>
#include "crcpro.h"
class Crc_AFactory : public QObject
{
    Q_OBJECT
public:
    explicit Crc_AFactory(QObject *parent = 0);
    virtual CrcPro * CreateCrc() = 0;  // 生产汽车
signals:

public slots:
};

#endif // CRC_AFACTORY_H
