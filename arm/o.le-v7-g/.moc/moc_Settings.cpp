/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x08,

 // methods: signature, parameters, type, tag, flags
      52,    9,   40,    9, 0x02,
      71,   67,   62,    9, 0x02,
      89,    9,    9,    9, 0x02,
     101,   67,   97,    9, 0x02,
     127,  117,    9,    9, 0x02,
     154,    9,    9,    9, 0x02,
     187,  170,  161,    9, 0x02,
     211,   67,  161,    9, 0x22,

       0        // eod
};

static const char qt_meta_stringdata_Settings[] = {
    "Settings\0\0path\0settingsChanged(QString)\0"
    "QStringList\0allKeys()\0bool\0key\0"
    "contains(QString)\0clear()\0int\0"
    "remove(QString)\0key,value\0"
    "setValue(QString,QVariant)\0sync()\0"
    "QVariant\0key,defaultValue\0"
    "value(QString,QVariant)\0value(QString)\0"
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QStringList _r = _t->allKeys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->contains((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->clear(); break;
        case 4: { int _r = _t->remove((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->sync(); break;
        case 7: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Settings,
      qt_meta_data_Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QObject::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
