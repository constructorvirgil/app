#ifndef CRCPRO_H
#define CRCPRO_H

#include <QObject>




class CrcPro : public QObject
{
    Q_OBJECT
public:
    explicit CrcPro(QObject *parent = 0);
    virtual ~CrcPro(){}

    bool isToggle;
    uint32_t formula; //生成多项式
    uint32_t crc_table[256];

    void Init(bool istoggle,uint32_t formula);
    uint32_t *  CreateTable( void );

protected:

    virtual uint32_t cal_crc_perbyte(uint32_t data) = 0;
    virtual uint32_t cal_crc_perbyte_toggle(uint32_t data) = 0;



signals:

public slots:

};

#endif // CRCPRO_H
