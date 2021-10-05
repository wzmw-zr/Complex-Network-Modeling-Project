#include "attack_ui.h"
#include "ui_attack_ui.h"

Attack_UI::Attack_UI(QWidget *parent) :
    QWidget(parent),
    net(NetWork()),
    mode(0),
    ui(new Ui::Attack_UI)
{
    ui->setupUi(this);
}


void Attack_UI::init(NetWork network, int new_mode) {
    net = network;
    mode = new_mode;
    show_number_of_nodes();
    show_number_of_edges();
    show_average_degree();
    show_graph_clustering_coefficient();
    show_graph_coreness();
    show_average_shortest_path_and_diameter();
    show_num_scc_and_largest_scc();
    draw_network();
}

void Attack_UI::show_number_of_nodes() {
    int n = net.num_nodes();
    ui->node_number->setText(QString::fromStdString(std::to_string(n)));
}

void Attack_UI::show_number_of_edges() {
    int m = net.num_edges();
    ui->edge_number->setText(QString::fromStdString(std::to_string(m)));
}

void Attack_UI::draw_network() {
    string path = (mode == 1 ? "random_attack_" : "intentional_attack_");
    path += "network_structure.jpg";
    net.draw_network(path);
    ui->image_area->setPixmap(QPixmap(QString::fromStdString(path)));
    ui->image_area->show();
}

void Attack_UI::show_average_degree() {
    double d = net.average_degree();
    ui->average_degree->setText(QString::fromStdString(std::to_string(d)));
}

void Attack_UI::show_graph_clustering_coefficient() {
    double c = net.cluster_coefficient_graph();
    ui->graph_cs->setText(QString::fromStdString(std::to_string(c)));
}

void Attack_UI::show_graph_coreness() {
    int c = net.coreness_of_graph();
    ui->graph_coreness->setText(QString::fromStdString(std::to_string(c)));
}

void Attack_UI::show_average_shortest_path_and_diameter() {
    auto &&[avg_path_length, d] = net.average_path_length_and_diameter();
    ui->average_path_length->setText(QString::fromStdString(std::to_string(avg_path_length)));
    ui->diameter->setText(QString::fromStdString(std::to_string(d)));
}

void Attack_UI::show_num_scc_and_largest_scc() {
    auto &&[scc_cnt, scc_size] = net.number_of_scc_and_nodes_in_largest_scc();
    ui->scc_number->setText(QString::fromStdString(std::to_string(scc_cnt)));
    ui->largest_scc->setText(QString::fromStdString(std::to_string(scc_size)));
}


Attack_UI::~Attack_UI()
{
    delete ui;
}
