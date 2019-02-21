/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../analyzer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "Slot_scanBtn_click"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "Slot_scanDummyBtn_click"
QT_MOC_LITERAL(4, 55, 16), // "Slot_cursor_move"
QT_MOC_LITERAL(5, 72, 3), // "pos"
QT_MOC_LITERAL(6, 76, 16), // "Slot_band_change"
QT_MOC_LITERAL(7, 93, 3), // "idx"
QT_MOC_LITERAL(8, 97, 19), // "Slot_fcentre_change"
QT_MOC_LITERAL(9, 117, 1), // "v"
QT_MOC_LITERAL(10, 119, 17), // "Slot_fspan_change"
QT_MOC_LITERAL(11, 137, 23), // "Slot_point_count_change"
QT_MOC_LITERAL(12, 161, 16), // "Slot_plot_change"
QT_MOC_LITERAL(13, 178, 20), // "Slot_menuDevice_Show"
QT_MOC_LITERAL(14, 199, 22), // "Slot_menuDevice_Select"
QT_MOC_LITERAL(15, 222, 8), // "QAction*"
QT_MOC_LITERAL(16, 231, 3), // "act"
QT_MOC_LITERAL(17, 235, 9), // "Slot_Load"
QT_MOC_LITERAL(18, 245, 9), // "Slot_Save"
QT_MOC_LITERAL(19, 255, 13), // "Slot_Settings"
QT_MOC_LITERAL(20, 269, 10), // "Slot_about"
QT_MOC_LITERAL(21, 280, 9), // "Slot_copy"
QT_MOC_LITERAL(22, 290, 19), // "Slot_freqmon_change"
QT_MOC_LITERAL(23, 310, 23), // "Slot_moninterval_change"
QT_MOC_LITERAL(24, 334, 19), // "Slot_moncursor_move"
QT_MOC_LITERAL(25, 354, 22), // "Slot_monstartBtn_click"
QT_MOC_LITERAL(26, 377, 21) // "Slot_monstopBtn_click"

    },
    "MainWindow\0Slot_scanBtn_click\0\0"
    "Slot_scanDummyBtn_click\0Slot_cursor_move\0"
    "pos\0Slot_band_change\0idx\0Slot_fcentre_change\0"
    "v\0Slot_fspan_change\0Slot_point_count_change\0"
    "Slot_plot_change\0Slot_menuDevice_Show\0"
    "Slot_menuDevice_Select\0QAction*\0act\0"
    "Slot_Load\0Slot_Save\0Slot_Settings\0"
    "Slot_about\0Slot_copy\0Slot_freqmon_change\0"
    "Slot_moninterval_change\0Slot_moncursor_move\0"
    "Slot_monstartBtn_click\0Slot_monstopBtn_click"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08 /* Private */,
       3,    0,  115,    2, 0x08 /* Private */,
       4,    1,  116,    2, 0x08 /* Private */,
       6,    1,  119,    2, 0x08 /* Private */,
       8,    1,  122,    2, 0x08 /* Private */,
      10,    1,  125,    2, 0x08 /* Private */,
      11,    1,  128,    2, 0x08 /* Private */,
      12,    1,  131,    2, 0x08 /* Private */,
      13,    0,  134,    2, 0x08 /* Private */,
      14,    1,  135,    2, 0x08 /* Private */,
      17,    0,  138,    2, 0x08 /* Private */,
      18,    0,  139,    2, 0x08 /* Private */,
      19,    0,  140,    2, 0x08 /* Private */,
      20,    0,  141,    2, 0x08 /* Private */,
      21,    0,  142,    2, 0x08 /* Private */,
      22,    1,  143,    2, 0x08 /* Private */,
      23,    1,  146,    2, 0x08 /* Private */,
      24,    1,  149,    2, 0x08 /* Private */,
      25,    0,  152,    2, 0x08 /* Private */,
      26,    0,  153,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Slot_scanBtn_click(); break;
        case 1: _t->Slot_scanDummyBtn_click(); break;
        case 2: _t->Slot_cursor_move((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->Slot_band_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Slot_fcentre_change((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->Slot_fspan_change((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->Slot_point_count_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->Slot_plot_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->Slot_menuDevice_Show(); break;
        case 9: _t->Slot_menuDevice_Select((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->Slot_Load(); break;
        case 11: _t->Slot_Save(); break;
        case 12: _t->Slot_Settings(); break;
        case 13: _t->Slot_about(); break;
        case 14: _t->Slot_copy(); break;
        case 15: _t->Slot_freqmon_change((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->Slot_moninterval_change((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->Slot_moncursor_move((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->Slot_monstartBtn_click(); break;
        case 19: _t->Slot_monstopBtn_click(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EventReceiver"))
        return static_cast< EventReceiver*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
