/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MonitorApplications/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 36), // "signalChangeQuentitySecondFor..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 18), // "signalOutputPeriod"
QT_MOC_LITERAL(4, 68, 12), // "PeriodOutput"
QT_MOC_LITERAL(5, 81, 12), // "i_typePeriod"
QT_MOC_LITERAL(6, 94, 34), // "slotChangeQuentitySecondForPr..."
QT_MOC_LITERAL(7, 129, 24), // "slotAddPeriodMinuteToAll"
QT_MOC_LITERAL(8, 154, 27), // "slotAddPeriodSecondToMinute"
QT_MOC_LITERAL(9, 182, 16), // "slotOutputPeriod"
QT_MOC_LITERAL(10, 199, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(11, 222, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(12, 247, 24), // "on_radioButton_3_clicked"
QT_MOC_LITERAL(13, 272, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(14, 297, 21), // "on_ui_btnHour_clicked"
QT_MOC_LITERAL(15, 319, 20), // "on_ui_btnDay_clicked"
QT_MOC_LITERAL(16, 340, 22), // "on_ui_btnMonth_clicked"
QT_MOC_LITERAL(17, 363, 21) // "on_ui_btnYear_clicked"

    },
    "MainWindow\0signalChangeQuentitySecondForProcess\0"
    "\0signalOutputPeriod\0PeriodOutput\0"
    "i_typePeriod\0slotChangeQuentitySecondForProcess\0"
    "slotAddPeriodMinuteToAll\0"
    "slotAddPeriodSecondToMinute\0"
    "slotOutputPeriod\0on_radioButton_clicked\0"
    "on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked\0"
    "on_radioButton_4_clicked\0on_ui_btnHour_clicked\0"
    "on_ui_btnDay_clicked\0on_ui_btnMonth_clicked\0"
    "on_ui_btnYear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalChangeQuentitySecondForProcess(); break;
        case 1: _t->signalOutputPeriod((*reinterpret_cast< PeriodOutput(*)>(_a[1]))); break;
        case 2: _t->slotChangeQuentitySecondForProcess(); break;
        case 3: _t->slotAddPeriodMinuteToAll(); break;
        case 4: _t->slotAddPeriodSecondToMinute(); break;
        case 5: _t->slotOutputPeriod((*reinterpret_cast< PeriodOutput(*)>(_a[1]))); break;
        case 10: _t->on_ui_btnHour_clicked(); break;
        case 11: _t->on_ui_btnDay_clicked(); break;
        case 12: _t->on_ui_btnMonth_clicked(); break;
        case 13: _t->on_ui_btnYear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalChangeQuentitySecondForProcess)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(PeriodOutput );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalOutputPeriod)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signalChangeQuentitySecondForProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::signalOutputPeriod(PeriodOutput _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
