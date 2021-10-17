/*************************************************************************
	> File Name: Network.h
	> Author: 
	> Mail: 
	> Created Time: 2021年09月19日 星期日 17时04分29秒
 ************************************************************************/

#ifndef _NETWORK_H
#define _NETWORK_H

#include "Python.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>
#include <ctime>
#include <chrono>
#include <random>

using std::string;
using std::pair;
using std::unordered_set;
using std::unordered_map;
using std::tuple;
using std::vector;
using std::queue;
using std::priority_queue;
using std::sort;
using std::max;
using std::to_string;

struct UnionSet {
    int n;
    vector<int> fa;
    vector<int> val;

    UnionSet() = default;
    UnionSet(int n);

    void merge(int x, int y);
    int get(int x);
};

struct Node {
    int id;
    int x;
    int y;
    unordered_set<int> next;

    Node() = default;
    Node(int ind);
};

struct NetWork {
    string path;
    unordered_map<int, Node> nodes;

    using PII = pair<int, int>;

    NetWork() = default;

    NetWork(string path);

    NetWork(unordered_map<int, Node> nodes);

    int num_nodes();
    int num_edges();
    int node_degree(int id);
    double average_degree();
    int max_degree();
    vector<PII> degree_distribution();
    void dijstra(int id, vector<vector<int>> &dis);
    void bfs(int id, vector<vector<int>> &dis);
    vector<vector<int>> shortest_path_of_each_pair_nodes();
    tuple<double, int> average_path_length_and_diameter();
    double cluster_coefficient_node(int id);
    double cluster_coefficient_graph();
    void remove_k_degree_nodes(int k, unordered_map<int, Node> &graph, vector<int> &coreness, int &rest);
    int coreness_of_node(int id);
    vector<int> coreness_of_each_node();
    int coreness_of_graph();
    void attack(unordered_map<int, Node> &graph, int id);
    vector<int> generate_random_nodes_id();
    vector<int> generate_intentional_nodes_id();
    NetWork random_attack(int percent);
    // TODO: add attack mode like `attack cetain degree` or `attack certain coreness`
    NetWork intentional_attack(int degree);
    #if 0
    int tarjan_scc(int ind);
    int number_of_scc();
    #endif
    int get_id_upper_bound();
    tuple<int, int> number_of_scc_and_nodes_in_largest_scc();
    void draw_network(string s);
    void draw_degree_distribution(string s);
    // TODO
    void draw_coreness_distribution(string s);
    void draw_shortest_path_length_distribution(string s);

    void draw_clustering_coefficient_each_node(string s);

    void draw_attack_largest_scc_size(string s);
    void draw_attack_average_path_length(string s);
};


#endif
