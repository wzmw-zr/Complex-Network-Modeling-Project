#ifndef ATTACK_UI_H
#define ATTACK_UI_H

#include <QWidget>
#include "NetWork.h"

namespace Ui {
class Attack_UI;
}

class Attack_UI : public QWidget
{
    Q_OBJECT

public:
    explicit Attack_UI(QWidget *parent = nullptr);
    ~Attack_UI();

    NetWork net;
    int mode;

    void init(NetWork net, int mode);
    void show_number_of_nodes();
    void show_number_of_edges();
    void draw_network();
    void show_average_degree();
    void show_graph_clustering_coefficient();
    void show_graph_coreness();
    void show_average_shortest_path_and_diameter();
    void show_num_scc_and_largest_scc();

private:
    Ui::Attack_UI *ui;
};

#endif // ATTACK_UI_H
