#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QFileDialog>
#include <QGraphicsScene>
#include <QPixmap>
#include <string>
#include <iostream>
// #include <thread>
// #include <future>
#include "NetWork.h"
#include "attack_ui.h"
// #include "degree_window.h"

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

    NetWork net;

#if 0
    void generate_number_of_nodes();
    void generate_number_of_edges();
    void generate_average_degree();
    void generate_average_path_length_and_diameter();
    // void generate_diameter();
    void generate_clustering_coefficient();
    void generate_coreness();
    void generate_number_of_scc_and_largest_scc();
    // void generate_largest_scc();
#endif

#if 0
signals:
    void send_number_of_nodes(int);
    void send_number_of_edges(int);
    void send_average_degree(double);
    void send_average_path_length(double);
    void send_diameter(int);
    void send_clustering_coefficient(double);
    void send_coreness(int);
    void send_number_of_scc(int);
    void send_largest_scc(int);
#endif


public slots:
    void open_dir();

    void show_number_of_nodes();
    void show_number_of_edges();
    void draw_network();

    void show_node_degree();
    void show_degree_distribution();
    void show_average_degree();

    void show_node_clustering_coefficient();
    void show_graph_clustering_coefficient();

    void show_node_coreness();
    void show_graph_coreness();

    void show_average_shortest_path_and_diameter();
    void show_num_scc_and_largest_scc();

    void random_attack();
    void intentional_attack();

private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
