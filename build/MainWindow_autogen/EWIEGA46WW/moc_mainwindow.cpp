/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainwindow_t {
    QByteArrayData data[17];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainwindow_t qt_meta_stringdata_mainwindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainwindow"
QT_MOC_LITERAL(1, 11, 8), // "open_dir"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 20), // "show_number_of_nodes"
QT_MOC_LITERAL(4, 42, 20), // "show_number_of_edges"
QT_MOC_LITERAL(5, 63, 12), // "draw_network"
QT_MOC_LITERAL(6, 76, 16), // "show_node_degree"
QT_MOC_LITERAL(7, 93, 24), // "show_degree_distribution"
QT_MOC_LITERAL(8, 118, 19), // "show_average_degree"
QT_MOC_LITERAL(9, 138, 32), // "show_node_clustering_coefficient"
QT_MOC_LITERAL(10, 171, 33), // "show_graph_clustering_coeffic..."
QT_MOC_LITERAL(11, 205, 18), // "show_node_coreness"
QT_MOC_LITERAL(12, 224, 19), // "show_graph_coreness"
QT_MOC_LITERAL(13, 244, 39), // "show_average_shortest_path_an..."
QT_MOC_LITERAL(14, 284, 28), // "show_num_scc_and_largest_scc"
QT_MOC_LITERAL(15, 313, 13), // "random_attack"
QT_MOC_LITERAL(16, 327, 18) // "intentional_attack"

    },
    "mainwindow\0open_dir\0\0show_number_of_nodes\0"
    "show_number_of_edges\0draw_network\0"
    "show_node_degree\0show_degree_distribution\0"
    "show_average_degree\0"
    "show_node_clustering_coefficient\0"
    "show_graph_clustering_coefficient\0"
    "show_node_coreness\0show_graph_coreness\0"
    "show_average_shortest_path_and_diameter\0"
    "show_num_scc_and_largest_scc\0random_attack\0"
    "intentional_attack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void mainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open_dir(); break;
        case 1: _t->show_number_of_nodes(); break;
        case 2: _t->show_number_of_edges(); break;
        case 3: _t->draw_network(); break;
        case 4: _t->show_node_degree(); break;
        case 5: _t->show_degree_distribution(); break;
        case 6: _t->show_average_degree(); break;
        case 7: _t->show_node_clustering_coefficient(); break;
        case 8: _t->show_graph_clustering_coefficient(); break;
        case 9: _t->show_node_coreness(); break;
        case 10: _t->show_graph_coreness(); break;
        case 11: _t->show_average_shortest_path_and_diameter(); break;
        case 12: _t->show_num_scc_and_largest_scc(); break;
        case 13: _t->random_attack(); break;
        case 14: _t->intentional_attack(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mainwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_mainwindow.data,
    qt_meta_data_mainwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainwindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
