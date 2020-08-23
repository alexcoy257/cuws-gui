/****************************************************************************
** Meta object code from reading C++ file 'qjacktrip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qjacktrip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjacktrip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QJackTrip_t {
    QByteArrayData data[19];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJackTrip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJackTrip_t qt_meta_stringdata_QJackTrip = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QJackTrip"
QT_MOC_LITERAL(1, 10, 10), // "signalExit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "processFinished"
QT_MOC_LITERAL(4, 38, 12), // "processError"
QT_MOC_LITERAL(5, 51, 12), // "errorMessage"
QT_MOC_LITERAL(6, 64, 26), // "receivedConnectionFromPeer"
QT_MOC_LITERAL(7, 91, 17), // "udpWaitingTooLong"
QT_MOC_LITERAL(8, 109, 13), // "chooseRunType"
QT_MOC_LITERAL(9, 123, 4), // "type"
QT_MOC_LITERAL(10, 128, 14), // "addressChanged"
QT_MOC_LITERAL(11, 143, 7), // "address"
QT_MOC_LITERAL(12, 151, 10), // "receivedIP"
QT_MOC_LITERAL(13, 162, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 177, 5), // "reply"
QT_MOC_LITERAL(15, 183, 12), // "resetOptions"
QT_MOC_LITERAL(16, 196, 5), // "start"
QT_MOC_LITERAL(17, 202, 4), // "stop"
QT_MOC_LITERAL(18, 207, 4) // "exit"

    },
    "QJackTrip\0signalExit\0\0processFinished\0"
    "processError\0errorMessage\0"
    "receivedConnectionFromPeer\0udpWaitingTooLong\0"
    "chooseRunType\0type\0addressChanged\0"
    "address\0receivedIP\0QNetworkReply*\0"
    "reply\0resetOptions\0start\0stop\0exit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJackTrip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
      10,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QJackTrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QJackTrip *_t = static_cast<QJackTrip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalExit(); break;
        case 1: _t->processFinished(); break;
        case 2: _t->processError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->receivedConnectionFromPeer(); break;
        case 4: _t->udpWaitingTooLong(); break;
        case 5: _t->chooseRunType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->addressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->receivedIP((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->resetOptions(); break;
        case 9: _t->start(); break;
        case 10: _t->stop(); break;
        case 11: _t->exit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QJackTrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJackTrip::signalExit)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QJackTrip::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QJackTrip.data,
      qt_meta_data_QJackTrip,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QJackTrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJackTrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QJackTrip.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QJackTrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QJackTrip::signalExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
