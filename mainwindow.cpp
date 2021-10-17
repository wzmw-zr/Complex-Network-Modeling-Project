#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    net(NetWork()),
    ui(new Ui::mainwindow())
{
    ui->setupUi(this);
    setWindowTitle("MainWindow");

    // click button `button_search_dataset` and open directories.
    // read select file and compute number of nodes, edges.
    // set the upper_bound of each spinbox.
    connect(ui->button_search_dataset, SIGNAL(clicked()), this, SLOT(open_dir()));
    // click button `button_draw_network` and show the image of network.
    connect(ui->button_draw_network, SIGNAL(clicked()), this, SLOT(draw_network()));
    // click button `button_node_degree` and show the degree of node.
    connect(ui->button_node_degree, SIGNAL(clicked()), this, SLOT(show_node_degree()));
    // click button `button_degree_distribution` and show the image of degree distribution.
    connect(ui->button_degree_distribution, SIGNAL(clicked()), this, SLOT(show_degree_distribution()));
    // click button `button_avg_degree`, show average degree.
    connect(ui->button_avg_degree, SIGNAL(clicked()), this, SLOT(show_average_degree()));
    // click button `button_node_cs`, show the clustering coefficient of a node.
    connect(ui->button_node_cs, SIGNAL(clicked()), this, SLOT(show_node_clustering_coefficient()));
    // click button `button_graph_cs`, show clustering coefficient of graph.
    connect(ui->button_graph_cs, SIGNAL(clicked()), this, SLOT(show_graph_clustering_coefficient()));
    // click button `button_node_coreness`, show coreness of a node.
    connect(ui->button_node_coreness, SIGNAL(clicked()), this, SLOT(show_node_coreness()));
    // click button `button_graph_coreness`, show coreness of graph.
    connect(ui->button_graph_coreness, SIGNAL(clicked()), this, SLOT(show_graph_coreness()));
    // click button `button_path_diameter`, show average shortest path and diameter.
    connect(ui->button_path_diameter, SIGNAL(clicked()), this, SLOT(show_average_shortest_path_and_diameter()));
    // click button `button_scc`, show number of scc and the size of largest scc.
    connect(ui->button_scc, SIGNAL(clicked()), this, SLOT(show_num_scc_and_largest_scc()));
    connect(ui->button_random_attack, SIGNAL(clicked()), this, SLOT(random_attack()));
    connect(ui->button_intentional_attack, SIGNAL(clicked()), this, SLOT(intentional_attack()));

    connect(ui->button_attack_largest_scc, SIGNAL(clicked()), this, SLOT(draw_attack_largest_scc_size()));
    connect(ui->button_attack_avg_path, SIGNAL(clicked()), this, SLOT(draw_attack_average_path_length()));

    connect(ui->button_clear, SIGNAL(clicked()), this, SLOT(clear_all()));
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::open_dir() {
    QString path = QFileDialog::getOpenFileName(this);
    net = NetWork(path.toStdString().data());
    std::cout << path.toStdString().data() << std::endl;
    show_number_of_nodes();
    show_number_of_edges();
    ui->degree_node_id->setMaximum(net.num_nodes());
    ui->cs_node_id->setMaximum(net.num_nodes());
    ui->coreness_node_id->setMaximum(net.num_nodes());
    ui->intentional_attack_degree->setMaximum(net.max_degree());
}

void mainwindow::show_number_of_nodes() {
    int n = net.num_nodes();
    ui->node_number->setText(QString::fromStdString(std::to_string(n)));
}

void mainwindow::show_number_of_edges() {
    int m = net.num_edges();
    ui->edge_number->setText(QString::fromStdString(std::to_string(m)));
}

void mainwindow::draw_network() {
    string s = "original_network_structure.jpg";
    net.draw_network(s);
    int width = ui->image_area->width();
    int height = ui->image_area->height();
    QPixmap pixmap = QPixmap(QString::fromStdString(s));
    QPixmap fitpixmap = pixmap.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->image_area->setPixmap(fitpixmap);
    ui->image_area->show();
}

// get number in spinbox `degree_node_id`, and show degree of node.
void mainwindow::show_node_degree() {
    int node_id = ui->degree_node_id->value() - 1;
    int degree = net.node_degree(node_id);
    ui->node_degree->setText(QString::fromStdString(std::to_string(degree)));
}

void mainwindow::show_degree_distribution() {
    string s = "original_degree_distribution.jpg";
    net.draw_degree_distribution(s);
    ui->image_area->setPixmap(QPixmap(QString::fromStdString(s)));
    ui->image_area->show();
}

void mainwindow::show_average_degree() {
    double d = net.average_degree();
    ui->average_degree->setText(QString::fromStdString(std::to_string(d)));
}

void mainwindow::show_node_clustering_coefficient() {
    int id = ui->cs_node_id->value() - 1;
    double c = net.cluster_coefficient_node(id);
    ui->node_cs->setText(QString::fromStdString(std::to_string(c)));
}

void mainwindow::show_graph_clustering_coefficient() {
    double c = net.cluster_coefficient_graph();
    ui->graph_cs->setText(QString::fromStdString(std::to_string(c)));
}

void mainwindow::show_node_coreness() {
    int id = ui->coreness_node_id->value() - 1;
    int c = net.coreness_of_node(id);
    ui->node_coreness->setText(QString::fromStdString(std::to_string(c)));
}

void mainwindow::show_graph_coreness() {
    int c = net.coreness_of_graph();
    ui->graph_coreness->setText(QString::fromStdString(std::to_string(c)));
}

void mainwindow::show_average_shortest_path_and_diameter() {
    auto &&[avg_path_length, d] = net.average_path_length_and_diameter();
    ui->average_path_length->setText(QString::fromStdString(std::to_string(avg_path_length)));
    ui->diameter->setText(QString::fromStdString(std::to_string(d)));
}

void mainwindow::show_num_scc_and_largest_scc() {
    auto &&[scc_cnt, scc_size] = net.number_of_scc_and_nodes_in_largest_scc();
    ui->scc_number->setText(QString::fromStdString(std::to_string(scc_cnt)));
    ui->largest_scc->setText(QString::fromStdString(std::to_string(scc_size)));
}

void mainwindow::random_attack() {
    int per = ui->random_attack_percent->value();
    auto net_after_attack = net.random_attack(per);
    Attack_UI *attack_window = new Attack_UI;
    attack_window->init(net_after_attack, 1);
    attack_window->setWindowTitle("Random Attack");
    attack_window->show();
}

void mainwindow::intentional_attack() {
    int degree = ui->intentional_attack_degree->value();
    auto net_after_attack = net.intentional_attack(degree);
    Attack_UI *attack_window = new Attack_UI;
    attack_window->init(net_after_attack, 2);
    attack_window->setWindowTitle("Intentional Attack");
    attack_window->show();
}

void mainwindow::draw_attack_largest_scc_size() {
    string s = "attack_largest_scc_size.jpg";
    net.draw_attack_largest_scc_size(s);
    ui->image_area->setPixmap(QPixmap(QString::fromStdString(s)));
    ui->image_area->show();
}

void mainwindow::draw_attack_average_path_length() {
    string s = "attack_average_path_length.jpg";
    net.draw_attack_average_path_length(s);
    ui->image_area->setPixmap(QPixmap(QString::fromStdString(s)));
    ui->image_area->show();
}

void mainwindow::clear_all() {
    ui->node_number->clear();
    ui->edge_number->clear();
    ui->node_degree->clear();
    ui->average_degree->clear();
    ui->node_cs->clear();
    ui->graph_cs->clear();
    ui->node_coreness->clear();
    ui->graph_coreness->clear();
    ui->average_path_length->clear();
    ui->diameter->clear();
    ui->scc_number->clear();
    ui->largest_scc->clear();
    ui->degree_node_id->cleanText();
    ui->cs_node_id->cleanText();
    ui->coreness_node_id->cleanText();
    ui->random_attack_percent->cleanText();
    ui->intentional_attack_degree->cleanText();
}
