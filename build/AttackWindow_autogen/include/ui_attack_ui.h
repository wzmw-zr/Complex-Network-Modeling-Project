/********************************************************************************
** Form generated from reading UI file 'attack_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACK_UI_H
#define UI_ATTACK_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attack_UI
{
public:
    QLabel *image_area;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *scc_number;
    QLabel *node_number;
    QLabel *graph_coreness;
    QLabel *average_path_length;
    QLabel *label_average_path_length;
    QLabel *label_edge_number;
    QLabel *diameter;
    QLabel *label_diameter;
    QLabel *average_degree;
    QLabel *graph_cs;
    QLabel *label_scc_number;
    QLabel *largest_scc;
    QLabel *label_clustering_coefficient;
    QLabel *label_largest_scc;
    QLabel *label_average_degree;
    QLabel *label_corness;
    QLabel *edge_number;
    QLabel *label_node_number;

    void setupUi(QWidget *Attack_UI)
    {
        if (Attack_UI->objectName().isEmpty())
            Attack_UI->setObjectName(QString::fromUtf8("Attack_UI"));
        Attack_UI->resize(1204, 642);
        image_area = new QLabel(Attack_UI);
        image_area->setObjectName(QString::fromUtf8("image_area"));
        image_area->setGeometry(QRect(350, 40, 800, 500));
        widget = new QWidget(Attack_UI);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 120, 220, 276));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scc_number = new QLabel(widget);
        scc_number->setObjectName(QString::fromUtf8("scc_number"));

        gridLayout->addWidget(scc_number, 7, 1, 1, 1);

        node_number = new QLabel(widget);
        node_number->setObjectName(QString::fromUtf8("node_number"));

        gridLayout->addWidget(node_number, 0, 1, 1, 1);

        graph_coreness = new QLabel(widget);
        graph_coreness->setObjectName(QString::fromUtf8("graph_coreness"));

        gridLayout->addWidget(graph_coreness, 6, 1, 1, 1);

        average_path_length = new QLabel(widget);
        average_path_length->setObjectName(QString::fromUtf8("average_path_length"));

        gridLayout->addWidget(average_path_length, 3, 1, 1, 1);

        label_average_path_length = new QLabel(widget);
        label_average_path_length->setObjectName(QString::fromUtf8("label_average_path_length"));

        gridLayout->addWidget(label_average_path_length, 3, 0, 1, 1);

        label_edge_number = new QLabel(widget);
        label_edge_number->setObjectName(QString::fromUtf8("label_edge_number"));

        gridLayout->addWidget(label_edge_number, 1, 0, 1, 1);

        diameter = new QLabel(widget);
        diameter->setObjectName(QString::fromUtf8("diameter"));

        gridLayout->addWidget(diameter, 4, 1, 1, 1);

        label_diameter = new QLabel(widget);
        label_diameter->setObjectName(QString::fromUtf8("label_diameter"));

        gridLayout->addWidget(label_diameter, 4, 0, 1, 1);

        average_degree = new QLabel(widget);
        average_degree->setObjectName(QString::fromUtf8("average_degree"));

        gridLayout->addWidget(average_degree, 2, 1, 1, 1);

        graph_cs = new QLabel(widget);
        graph_cs->setObjectName(QString::fromUtf8("graph_cs"));

        gridLayout->addWidget(graph_cs, 5, 1, 1, 1);

        label_scc_number = new QLabel(widget);
        label_scc_number->setObjectName(QString::fromUtf8("label_scc_number"));

        gridLayout->addWidget(label_scc_number, 7, 0, 1, 1);

        largest_scc = new QLabel(widget);
        largest_scc->setObjectName(QString::fromUtf8("largest_scc"));

        gridLayout->addWidget(largest_scc, 8, 1, 1, 1);

        label_clustering_coefficient = new QLabel(widget);
        label_clustering_coefficient->setObjectName(QString::fromUtf8("label_clustering_coefficient"));

        gridLayout->addWidget(label_clustering_coefficient, 5, 0, 1, 1);

        label_largest_scc = new QLabel(widget);
        label_largest_scc->setObjectName(QString::fromUtf8("label_largest_scc"));

        gridLayout->addWidget(label_largest_scc, 8, 0, 1, 1);

        label_average_degree = new QLabel(widget);
        label_average_degree->setObjectName(QString::fromUtf8("label_average_degree"));

        gridLayout->addWidget(label_average_degree, 2, 0, 1, 1);

        label_corness = new QLabel(widget);
        label_corness->setObjectName(QString::fromUtf8("label_corness"));

        gridLayout->addWidget(label_corness, 6, 0, 1, 1);

        edge_number = new QLabel(widget);
        edge_number->setObjectName(QString::fromUtf8("edge_number"));

        gridLayout->addWidget(edge_number, 1, 1, 1, 1);

        label_node_number = new QLabel(widget);
        label_node_number->setObjectName(QString::fromUtf8("label_node_number"));

        gridLayout->addWidget(label_node_number, 0, 0, 1, 1);


        retranslateUi(Attack_UI);

        QMetaObject::connectSlotsByName(Attack_UI);
    } // setupUi

    void retranslateUi(QWidget *Attack_UI)
    {
        Attack_UI->setWindowTitle(QCoreApplication::translate("Attack_UI", "Form", nullptr));
        image_area->setText(QString());
        scc_number->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        node_number->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        graph_coreness->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        average_path_length->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        label_average_path_length->setText(QCoreApplication::translate("Attack_UI", "\345\271\263\345\235\207\350\267\257\345\276\204\351\225\277\345\272\246", nullptr));
        label_edge_number->setText(QCoreApplication::translate("Attack_UI", "\350\276\271\346\225\260", nullptr));
        diameter->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        label_diameter->setText(QCoreApplication::translate("Attack_UI", "\347\233\264\345\276\204", nullptr));
        average_degree->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        graph_cs->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        label_scc_number->setText(QCoreApplication::translate("Attack_UI", "\350\277\236\351\200\232\345\210\206\351\207\217\346\225\260", nullptr));
        largest_scc->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        label_clustering_coefficient->setText(QCoreApplication::translate("Attack_UI", "clustering coefficient", nullptr));
        label_largest_scc->setText(QCoreApplication::translate("Attack_UI", "\346\234\200\345\244\247\350\277\236\351\200\232\345\210\206\351\207\217\350\212\202\347\202\271\346\225\260", nullptr));
        label_average_degree->setText(QCoreApplication::translate("Attack_UI", "\345\271\263\345\235\207\345\272\246\346\225\260", nullptr));
        label_corness->setText(QCoreApplication::translate("Attack_UI", "corness", nullptr));
        edge_number->setText(QCoreApplication::translate("Attack_UI", "0", nullptr));
        label_node_number->setText(QCoreApplication::translate("Attack_UI", "\350\212\202\347\202\271\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attack_UI: public Ui_Attack_UI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACK_UI_H
