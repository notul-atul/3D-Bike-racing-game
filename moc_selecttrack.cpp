/****************************************************************************
** Meta object code from reading C++ file 'selecttrack.h'
**
** Created: Sun Sep 15 14:36:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selecttrack.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selecttrack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectTrack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      43,   37,   12,   12, 0x08,
      74,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SelectTrack[] = {
    "SelectTrack\0\0on_pushButton_clicked()\0"
    "index\0on_toolBox_currentChanged(int)\0"
    "on_back_clicked()\0"
};

void SelectTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectTrack *_t = static_cast<SelectTrack *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_toolBox_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_back_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SelectTrack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectTrack::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectTrack,
      qt_meta_data_SelectTrack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectTrack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectTrack))
        return static_cast<void*>(const_cast< SelectTrack*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
