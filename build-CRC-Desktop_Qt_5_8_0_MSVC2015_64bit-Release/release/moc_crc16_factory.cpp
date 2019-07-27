/****************************************************************************
** Meta object code from reading C++ file 'crc16_factory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "E:/mygit/app/CRC/crc16_factory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crc16_factory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Crc16_Factory_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Crc16_Factory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Crc16_Factory_t qt_meta_stringdata_Crc16_Factory = {
    {
QT_MOC_LITERAL(0, 0, 13) // "Crc16_Factory"

    },
    "Crc16_Factory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Crc16_Factory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Crc16_Factory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Crc16_Factory::staticMetaObject = {
    { &Crc_AFactory::staticMetaObject, qt_meta_stringdata_Crc16_Factory.data,
      qt_meta_data_Crc16_Factory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Crc16_Factory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Crc16_Factory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Crc16_Factory.stringdata0))
        return static_cast<void*>(const_cast< Crc16_Factory*>(this));
    return Crc_AFactory::qt_metacast(_clname);
}

int Crc16_Factory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Crc_AFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
