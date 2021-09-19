/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年09月19日 星期日 18时47分38秒
 ************************************************************************/

#include "NetWork.h"

using std::cout;
using std::endl;

int main() {
    string path = "../ca-GrQc.txt";
    NetWork net(path);
    cout << "Number of nodes = " << net.num_nodes() << endl;
    cout << "Number of edges = " << net.num_edges() << endl;
    cout << "Average Degree = "  << net.average_degree() << endl;
    auto &&[average_path_length, diameter] = net.average_path_length_and_diameter();
    cout << "Average Path Length = " << average_path_length << endl;
    cout << "Diameter = " << diameter << endl;
    cout << "Cluster Coefficient = " << net.cluster_coefficient_graph() << endl;
    cout << "Coreness of NetWork = " << net.coreness_of_graph() << endl;
    cout << "Number of Nodes in Largest SCC = " << net.nodes_in_largest_scc() << endl;

    cout << endl;

    cout << "Intentional Attack" << endl;
    NetWork i_attack_net = net.intentional_attack();
    cout << "Number of nodes = " << i_attack_net.num_nodes() << endl;
    cout << "Number of edges = " << i_attack_net.num_edges() << endl;
    cout << "Average Degree = "  << i_attack_net.average_degree() << endl;
    auto &&[i_attack_average_path_length, i_attack_diameter] = i_attack_net.average_path_length_and_diameter();
    cout << "Average Path Length = " << i_attack_average_path_length << endl;
    cout << "Diameter = " << i_attack_diameter << endl;
    cout << "Cluster Coefficient = " << i_attack_net.cluster_coefficient_graph() << endl;
    cout << "Coreness of NetWork = " << i_attack_net.coreness_of_graph() << endl;
    cout << "Number of Nodes in Largest SCC = " << i_attack_net.nodes_in_largest_scc() << endl;

    cout << endl;

    cout << "Random Attack" << endl;
    NetWork r_attack_net = net.random_attack(10);
    cout << "Number of nodes = " << r_attack_net.num_nodes() << endl;
    cout << "Number of edges = " << r_attack_net.num_edges() << endl;
    cout << "Average Degree = "  << r_attack_net.average_degree() << endl;
    auto &&[r_attack_average_path_length, r_attack_diameter] = r_attack_net.average_path_length_and_diameter();
    cout << "Average Path Length = " << r_attack_average_path_length << endl;
    cout << "Diameter = " << r_attack_diameter << endl;
    cout << "Cluster Coefficient = " << r_attack_net.cluster_coefficient_graph() << endl;
    cout << "Coreness of NetWork = " << r_attack_net.coreness_of_graph() << endl;
    cout << "Number of Nodes in Largest SCC = " << r_attack_net.nodes_in_largest_scc() << endl;

    return 0;
}

