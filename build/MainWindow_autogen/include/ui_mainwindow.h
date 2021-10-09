/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QLabel *image_area;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *button_node_coreness;
    QLabel *label_degree_distribution;
    QSpinBox *cs_node_id;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_corness;
    QLineEdit *node_cs;
    QLineEdit *diameter;
    QPushButton *button_scc;
    QLineEdit *edge_number;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_dataset;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *graph_coreness;
    QLineEdit *average_path_length;
    QLabel *label_3;
    QLineEdit *scc_number;
    QPushButton *button_avg_degree;
    QLabel *label_largest_scc;
    QLabel *label_5;
    QPushButton *button_draw_network;
    QSpinBox *coreness_node_id;
    QLineEdit *node_degree;
    QLineEdit *node_coreness;
    QLabel *label_diameter;
    QLineEdit *graph_cs;
    QPushButton *button_graph_cs;
    QPushButton *button_node_cs;
    QLabel *label_edge_number;
    QLabel *label_scc_number;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *node_number;
    QPushButton *button_graph_coreness;
    QLineEdit *average_degree;
    QSpinBox *degree_node_id;
    QLabel *label_7;
    QLabel *label;
    QPushButton *button_node_degree;
    QLabel *label_average_path_length;
    QLabel *label_average_degree;
    QLabel *label_6;
    QLabel *label_node_number;
    QLineEdit *largest_scc;
    QPushButton *button_search_dataset;
    QLabel *label_clustering_coefficient;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_path_diameter;
    QPushButton *button_degree_distribution;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_random_attack;
    QSpinBox *random_attack_percent;
    QLabel *label_percentage;
    QPushButton *button_random_attack;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_intentional_attack;
    QSpinBox *intentional_attack_degree;
    QLabel *degree;
    QPushButton *button_intentional_attack;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(1450, 853);
        image_area = new QLabel(mainwindow);
        image_area->setObjectName(QString::fromUtf8("image_area"));
        image_area->setGeometry(QRect(640, 50, 800, 500));
        widget = new QWidget(mainwindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 580, 791));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_node_coreness = new QPushButton(widget);
        button_node_coreness->setObjectName(QString::fromUtf8("button_node_coreness"));

        gridLayout->addWidget(button_node_coreness, 11, 6, 1, 4);

        label_degree_distribution = new QLabel(widget);
        label_degree_distribution->setObjectName(QString::fromUtf8("label_degree_distribution"));

        gridLayout->addWidget(label_degree_distribution, 5, 0, 1, 2);

        cs_node_id = new QSpinBox(widget);
        cs_node_id->setObjectName(QString::fromUtf8("cs_node_id"));
        cs_node_id->setMinimum(1);

        gridLayout->addWidget(cs_node_id, 8, 2, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 5, 10, 1, 3);

        label_corness = new QLabel(widget);
        label_corness->setObjectName(QString::fromUtf8("label_corness"));

        gridLayout->addWidget(label_corness, 12, 0, 1, 4);

        node_cs = new QLineEdit(widget);
        node_cs->setObjectName(QString::fromUtf8("node_cs"));

        gridLayout->addWidget(node_cs, 8, 11, 1, 6);

        diameter = new QLineEdit(widget);
        diameter->setObjectName(QString::fromUtf8("diameter"));

        gridLayout->addWidget(diameter, 15, 5, 1, 8);

        button_scc = new QPushButton(widget);
        button_scc->setObjectName(QString::fromUtf8("button_scc"));

        gridLayout->addWidget(button_scc, 16, 0, 1, 4);

        edge_number = new QLineEdit(widget);
        edge_number->setObjectName(QString::fromUtf8("edge_number"));

        gridLayout->addWidget(edge_number, 2, 4, 1, 8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 6, 15, 1, 1);

        label_dataset = new QLabel(widget);
        label_dataset->setObjectName(QString::fromUtf8("label_dataset"));

        gridLayout->addWidget(label_dataset, 0, 0, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 0, 15, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 10, 0, 1, 3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 12, 1, 3);

        graph_coreness = new QLineEdit(widget);
        graph_coreness->setObjectName(QString::fromUtf8("graph_coreness"));

        gridLayout->addWidget(graph_coreness, 12, 11, 1, 5);

        average_path_length = new QLineEdit(widget);
        average_path_length->setObjectName(QString::fromUtf8("average_path_length"));

        gridLayout->addWidget(average_path_length, 14, 5, 1, 8);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 3);

        scc_number = new QLineEdit(widget);
        scc_number->setObjectName(QString::fromUtf8("scc_number"));

        gridLayout->addWidget(scc_number, 17, 5, 1, 8);

        button_avg_degree = new QPushButton(widget);
        button_avg_degree->setObjectName(QString::fromUtf8("button_avg_degree"));

        gridLayout->addWidget(button_avg_degree, 6, 4, 1, 2);

        label_largest_scc = new QLabel(widget);
        label_largest_scc->setObjectName(QString::fromUtf8("label_largest_scc"));

        gridLayout->addWidget(label_largest_scc, 18, 0, 1, 4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 2);

        button_draw_network = new QPushButton(widget);
        button_draw_network->setObjectName(QString::fromUtf8("button_draw_network"));

        gridLayout->addWidget(button_draw_network, 0, 9, 1, 4);

        coreness_node_id = new QSpinBox(widget);
        coreness_node_id->setObjectName(QString::fromUtf8("coreness_node_id"));
        coreness_node_id->setMinimum(1);

        gridLayout->addWidget(coreness_node_id, 11, 2, 1, 3);

        node_degree = new QLineEdit(widget);
        node_degree->setObjectName(QString::fromUtf8("node_degree"));

        gridLayout->addWidget(node_degree, 4, 11, 1, 5);

        node_coreness = new QLineEdit(widget);
        node_coreness->setObjectName(QString::fromUtf8("node_coreness"));

        gridLayout->addWidget(node_coreness, 11, 11, 1, 6);

        label_diameter = new QLabel(widget);
        label_diameter->setObjectName(QString::fromUtf8("label_diameter"));

        gridLayout->addWidget(label_diameter, 15, 0, 1, 2);

        graph_cs = new QLineEdit(widget);
        graph_cs->setObjectName(QString::fromUtf8("graph_cs"));

        gridLayout->addWidget(graph_cs, 9, 11, 1, 6);

        button_graph_cs = new QPushButton(widget);
        button_graph_cs->setObjectName(QString::fromUtf8("button_graph_cs"));

        gridLayout->addWidget(button_graph_cs, 9, 6, 1, 4);

        button_node_cs = new QPushButton(widget);
        button_node_cs->setObjectName(QString::fromUtf8("button_node_cs"));

        gridLayout->addWidget(button_node_cs, 8, 6, 1, 4);

        label_edge_number = new QLabel(widget);
        label_edge_number->setObjectName(QString::fromUtf8("label_edge_number"));

        gridLayout->addWidget(label_edge_number, 2, 0, 1, 1);

        label_scc_number = new QLabel(widget);
        label_scc_number->setObjectName(QString::fromUtf8("label_scc_number"));

        gridLayout->addWidget(label_scc_number, 17, 0, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 12, 1, 3);

        node_number = new QLineEdit(widget);
        node_number->setObjectName(QString::fromUtf8("node_number"));

        gridLayout->addWidget(node_number, 1, 4, 1, 8);

        button_graph_coreness = new QPushButton(widget);
        button_graph_coreness->setObjectName(QString::fromUtf8("button_graph_coreness"));

        gridLayout->addWidget(button_graph_coreness, 12, 6, 1, 4);

        average_degree = new QLineEdit(widget);
        average_degree->setObjectName(QString::fromUtf8("average_degree"));

        gridLayout->addWidget(average_degree, 6, 8, 1, 7);

        degree_node_id = new QSpinBox(widget);
        degree_node_id->setObjectName(QString::fromUtf8("degree_node_id"));
        degree_node_id->setMinimum(1);

        gridLayout->addWidget(degree_node_id, 4, 2, 1, 3);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 11, 0, 1, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 7, 0, 1, 7);

        button_node_degree = new QPushButton(widget);
        button_node_degree->setObjectName(QString::fromUtf8("button_node_degree"));

        gridLayout->addWidget(button_node_degree, 4, 6, 1, 4);

        label_average_path_length = new QLabel(widget);
        label_average_path_length->setObjectName(QString::fromUtf8("label_average_path_length"));

        gridLayout->addWidget(label_average_path_length, 14, 0, 1, 2);

        label_average_degree = new QLabel(widget);
        label_average_degree->setObjectName(QString::fromUtf8("label_average_degree"));

        gridLayout->addWidget(label_average_degree, 6, 0, 1, 2);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 2);

        label_node_number = new QLabel(widget);
        label_node_number->setObjectName(QString::fromUtf8("label_node_number"));

        gridLayout->addWidget(label_node_number, 1, 0, 1, 1);

        largest_scc = new QLineEdit(widget);
        largest_scc->setObjectName(QString::fromUtf8("largest_scc"));

        gridLayout->addWidget(largest_scc, 18, 5, 1, 8);

        button_search_dataset = new QPushButton(widget);
        button_search_dataset->setObjectName(QString::fromUtf8("button_search_dataset"));

        gridLayout->addWidget(button_search_dataset, 0, 2, 1, 6);

        label_clustering_coefficient = new QLabel(widget);
        label_clustering_coefficient->setObjectName(QString::fromUtf8("label_clustering_coefficient"));

        gridLayout->addWidget(label_clustering_coefficient, 9, 0, 1, 6);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 9, 17, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 18, 15, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 17, 14, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 15, 15, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 14, 15, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 12, 16, 1, 2);

        button_path_diameter = new QPushButton(widget);
        button_path_diameter->setObjectName(QString::fromUtf8("button_path_diameter"));

        gridLayout->addWidget(button_path_diameter, 13, 0, 1, 6);

        button_degree_distribution = new QPushButton(widget);
        button_degree_distribution->setObjectName(QString::fromUtf8("button_degree_distribution"));

        gridLayout->addWidget(button_degree_distribution, 5, 3, 1, 5);

        widget1 = new QWidget(mainwindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(761, 620, 260, 36));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_random_attack = new QLabel(widget1);
        label_random_attack->setObjectName(QString::fromUtf8("label_random_attack"));

        horizontalLayout->addWidget(label_random_attack);

        random_attack_percent = new QSpinBox(widget1);
        random_attack_percent->setObjectName(QString::fromUtf8("random_attack_percent"));

        horizontalLayout->addWidget(random_attack_percent);

        label_percentage = new QLabel(widget1);
        label_percentage->setObjectName(QString::fromUtf8("label_percentage"));

        horizontalLayout->addWidget(label_percentage);

        button_random_attack = new QPushButton(widget1);
        button_random_attack->setObjectName(QString::fromUtf8("button_random_attack"));

        horizontalLayout->addWidget(button_random_attack);

        widget2 = new QWidget(mainwindow);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(761, 690, 309, 36));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_intentional_attack = new QLabel(widget2);
        label_intentional_attack->setObjectName(QString::fromUtf8("label_intentional_attack"));

        horizontalLayout_2->addWidget(label_intentional_attack);

        intentional_attack_degree = new QSpinBox(widget2);
        intentional_attack_degree->setObjectName(QString::fromUtf8("intentional_attack_degree"));

        horizontalLayout_2->addWidget(intentional_attack_degree);

        degree = new QLabel(widget2);
        degree->setObjectName(QString::fromUtf8("degree"));

        horizontalLayout_2->addWidget(degree);

        button_intentional_attack = new QPushButton(widget2);
        button_intentional_attack->setObjectName(QString::fromUtf8("button_intentional_attack"));

        horizontalLayout_2->addWidget(button_intentional_attack);


        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "Form", nullptr));
        image_area->setText(QString());
        button_node_coreness->setText(QCoreApplication::translate("mainwindow", "\350\276\223\345\207\272", nullptr));
        label_degree_distribution->setText(QCoreApplication::translate("mainwindow", "\345\272\246\346\225\260\345\210\206\345\270\203", nullptr));
        label_corness->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227\345\233\276\347\232\204corness", nullptr));
        button_scc->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227\350\277\236\351\200\232\345\210\206\351\207\217", nullptr));
        label_dataset->setText(QCoreApplication::translate("mainwindow", "\351\200\211\346\213\251\346\225\260\346\215\256\351\233\206", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227coreness\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227Degree\357\274\232", nullptr));
        button_avg_degree->setText(QCoreApplication::translate("mainwindow", "\350\276\223\345\207\272", nullptr));
        label_largest_scc->setText(QCoreApplication::translate("mainwindow", "\346\234\200\345\244\247\350\277\236\351\200\232\345\210\206\351\207\217\350\212\202\347\202\271\346\225\260", nullptr));
        label_5->setText(QCoreApplication::translate("mainwindow", "\351\200\211\346\213\251\350\212\202\347\202\271", nullptr));
        button_draw_network->setText(QCoreApplication::translate("mainwindow", "\347\273\230\345\210\266\347\275\221\347\273\234\345\233\276", nullptr));
        label_diameter->setText(QCoreApplication::translate("mainwindow", "\347\233\264\345\276\204", nullptr));
        button_graph_cs->setText(QCoreApplication::translate("mainwindow", "\350\276\223\345\207\272", nullptr));
        button_node_cs->setText(QCoreApplication::translate("mainwindow", "\350\276\223\345\207\272", nullptr));
        label_edge_number->setText(QCoreApplication::translate("mainwindow", "\350\276\271\346\225\260", nullptr));
        label_scc_number->setText(QCoreApplication::translate("mainwindow", "\350\277\236\351\200\232\345\210\206\351\207\217\346\225\260", nullptr));
        button_graph_coreness->setText(QCoreApplication::translate("mainwindow", "\350\276\223\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("mainwindow", "\351\200\211\346\213\251\350\212\202\347\202\271", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227clustering coefficient\357\274\232", nullptr));
        button_node_degree->setText(QCoreApplication::translate("mainwindow", "\350\276\223\345\207\272", nullptr));
        label_average_path_length->setText(QCoreApplication::translate("mainwindow", "\345\271\263\345\235\207\350\267\257\345\276\204\351\225\277\345\272\246", nullptr));
        label_average_degree->setText(QCoreApplication::translate("mainwindow", "\345\271\263\345\235\207\345\272\246\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("mainwindow", "\351\200\211\346\213\251\350\212\202\347\202\271", nullptr));
        label_node_number->setText(QCoreApplication::translate("mainwindow", "\350\212\202\347\202\271\346\225\260", nullptr));
        button_search_dataset->setText(QCoreApplication::translate("mainwindow", "Search", nullptr));
        label_clustering_coefficient->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227\345\233\276\347\232\204clustering coefficient", nullptr));
        button_path_diameter->setText(QCoreApplication::translate("mainwindow", "\350\256\241\347\256\227\345\271\263\345\235\207\346\234\200\347\237\255\350\267\257\345\276\204\344\270\216\347\233\264\345\276\204", nullptr));
        button_degree_distribution->setText(QCoreApplication::translate("mainwindow", "\346\230\276\347\244\272\345\272\246\346\225\260\345\210\206\345\270\203", nullptr));
        label_random_attack->setText(QCoreApplication::translate("mainwindow", "Random Attack", nullptr));
        label_percentage->setText(QCoreApplication::translate("mainwindow", "%", nullptr));
        button_random_attack->setText(QCoreApplication::translate("mainwindow", "Attack", nullptr));
        label_intentional_attack->setText(QCoreApplication::translate("mainwindow", "Intentional Attack", nullptr));
        degree->setText(QCoreApplication::translate("mainwindow", "degree", nullptr));
        button_intentional_attack->setText(QCoreApplication::translate("mainwindow", "Attack", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
