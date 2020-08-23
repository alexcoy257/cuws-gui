/****************************************************************************
** Meta object code from reading C++ file 'JackTrip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/JackTrip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JackTrip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JackTrip_t {
    QByteArrayData data[22];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JackTrip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JackTrip_t qt_meta_stringdata_JackTrip = {
    {
QT_MOC_LITERAL(0, 0, 8), // "JackTrip"
QT_MOC_LITERAL(1, 9, 22), // "signalProcessesStopped"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 28), // "signalNoUdpPacketsForSeconds"
QT_MOC_LITERAL(4, 62, 24), // "signalTcpClientConnected"
QT_MOC_LITERAL(5, 87, 11), // "signalError"
QT_MOC_LITERAL(6, 99, 12), // "errorMessage"
QT_MOC_LITERAL(7, 112, 32), // "signalReceivedConnectionFromPeer"
QT_MOC_LITERAL(8, 145, 23), // "signalUdpWaitingTooLong"
QT_MOC_LITERAL(9, 169, 17), // "slotStopProcesses"
QT_MOC_LITERAL(10, 187, 27), // "slotStopProcessesDueToError"
QT_MOC_LITERAL(11, 215, 39), // "slotUdpWaitingTooLongClientGo..."
QT_MOC_LITERAL(12, 255, 9), // "wait_msec"
QT_MOC_LITERAL(13, 265, 21), // "slotUdpWaitingTooLong"
QT_MOC_LITERAL(14, 287, 13), // "slotPrintTest"
QT_MOC_LITERAL(15, 301, 30), // "slotReceivedConnectionFromPeer"
QT_MOC_LITERAL(16, 332, 11), // "onStatTimer"
QT_MOC_LITERAL(17, 344, 21), // "receivedConnectionTCP"
QT_MOC_LITERAL(18, 366, 15), // "receivedDataTCP"
QT_MOC_LITERAL(19, 382, 15), // "receivedDataUDP"
QT_MOC_LITERAL(20, 398, 12), // "udpTimerTick"
QT_MOC_LITERAL(21, 411, 12) // "tcpTimerTick"

    },
    "JackTrip\0signalProcessesStopped\0\0"
    "signalNoUdpPacketsForSeconds\0"
    "signalTcpClientConnected\0signalError\0"
    "errorMessage\0signalReceivedConnectionFromPeer\0"
    "signalUdpWaitingTooLong\0slotStopProcesses\0"
    "slotStopProcessesDueToError\0"
    "slotUdpWaitingTooLongClientGoneProbably\0"
    "wait_msec\0slotUdpWaitingTooLong\0"
    "slotPrintTest\0slotReceivedConnectionFromPeer\0"
    "onStatTimer\0receivedConnectionTCP\0"
    "receivedDataTCP\0receivedDataUDP\0"
    "udpTimerTick\0tcpTimerTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JackTrip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,
       7,    0,  110,    2, 0x06 /* Public */,
       8,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  112,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,
      11,    1,  116,    2, 0x0a /* Public */,
      13,    0,  119,    2, 0x0a /* Public */,
      14,    0,  120,    2, 0x0a /* Public */,
      15,    0,  121,    2, 0x0a /* Public */,
      16,    0,  122,    2, 0x0a /* Public */,
      17,    0,  123,    2, 0x08 /* Private */,
      18,    0,  124,    2, 0x08 /* Private */,
      19,    0,  125,    2, 0x08 /* Private */,
      20,    0,  126,    2, 0x08 /* Private */,
      21,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JackTrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JackTrip *_t = static_cast<JackTrip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalProcessesStopped(); break;
        case 1: _t->signalNoUdpPacketsForSeconds(); break;
        case 2: _t->signalTcpClientConnected(); break;
        case 3: _t->signalError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->signalReceivedConnectionFromPeer(); break;
        case 5: _t->signalUdpWaitingTooLong(); break;
        case 6: _t->slotStopProcesses(); break;
        case 7: _t->slotStopProcessesDueToError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotUdpWaitingTooLongClientGoneProbably((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotUdpWaitingTooLong(); break;
        case 10: _t->slotPrintTest(); break;
        case 11: _t->slotReceivedConnectionFromPeer(); break;
        case 12: _t->onStatTimer(); break;
        case 13: _t->receivedConnectionTCP(); break;
        case 14: _t->receivedDataTCP(); break;
        case 15: _t->receivedDataUDP(); break;
        case 16: _t->udpTimerTick(); break;
        case 17: _t->tcpTimerTick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JackTrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackTrip::signalProcessesStopped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JackTrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackTrip::signalNoUdpPacketsForSeconds)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JackTrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackTrip::signalTcpClientConnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JackTrip::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackTrip::signalError)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JackTrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackTrip::signalReceivedConnectionFromPeer)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JackTrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackTrip::signalUdpWaitingTooLong)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JackTrip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JackTrip.data,
      qt_meta_data_JackTrip,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JackTrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JackTrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JackTrip.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JackTrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void JackTrip::signalProcessesStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JackTrip::signalNoUdpPacketsForSeconds()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JackTrip::signalTcpClientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JackTrip::signalError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JackTrip::signalReceivedConnectionFromPeer()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void JackTrip::signalUdpWaitingTooLong()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
