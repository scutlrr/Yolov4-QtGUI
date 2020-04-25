/****************************************************************************
** Meta object code from reading C++ file 'QtGuiDemo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiDemo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiDemo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGuiDemo_t {
    QByteArrayData data[13];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGuiDemo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGuiDemo_t qt_meta_stringdata_QtGuiDemo = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QtGuiDemo"
QT_MOC_LITERAL(1, 10, 8), // "initView"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "initMenu"
QT_MOC_LITERAL(4, 29, 9), // "cleanMenu"
QT_MOC_LITERAL(5, 39, 10), // "initLayout"
QT_MOC_LITERAL(6, 50, 11), // "cleanLayout"
QT_MOC_LITERAL(7, 62, 13), // "openVideoSlot"
QT_MOC_LITERAL(8, 76, 15), // "openPictureSlot"
QT_MOC_LITERAL(9, 92, 15), // "openCaptureSlot"
QT_MOC_LITERAL(10, 108, 10), // "paintEvent"
QT_MOC_LITERAL(11, 119, 12), // "QPaintEvent*"
QT_MOC_LITERAL(12, 132, 1) // "e"

    },
    "QtGuiDemo\0initView\0\0initMenu\0cleanMenu\0"
    "initLayout\0cleanLayout\0openVideoSlot\0"
    "openPictureSlot\0openCaptureSlot\0"
    "paintEvent\0QPaintEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGuiDemo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void QtGuiDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGuiDemo *_t = static_cast<QtGuiDemo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initView(); break;
        case 1: _t->initMenu(); break;
        case 2: _t->cleanMenu(); break;
        case 3: _t->initLayout(); break;
        case 4: _t->cleanLayout(); break;
        case 5: _t->openVideoSlot(); break;
        case 6: _t->openPictureSlot(); break;
        case 7: _t->openCaptureSlot(); break;
        case 8: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtGuiDemo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtGuiDemo.data,
      qt_meta_data_QtGuiDemo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGuiDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGuiDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGuiDemo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtGuiDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
