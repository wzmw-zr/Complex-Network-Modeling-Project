/*************************************************************************
	> File Name: Network.h
	> Author: 
	> Mail: 
	> Created Time: 2021年09月19日 星期日 17时04分29秒
 ************************************************************************/

#ifndef _NETWORK_H
#define _NETWORK_H

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
    unordered_set<int> next;

    Node() = default;
    Node(int id) : id(id), next(unordered_set<int>()) {}
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
    double average_degree();
    vector<PII> degree_distribution();
    void dijstra(int id, vector<vector<int>> &dis);
    void bfs(int id, vector<vector<int>> &dis);
    tuple<double, int> average_path_length_and_diameter();
    double cluster_coefficient_node(int id);
    double cluster_coefficient_graph();
    void remove_k_degree_nodes(int k, unordered_map<int, Node> &graph, vector<int> &coreness, int &rest);
    int coreness_of_graph();
    void attack(unordered_map<int, Node> &graph, int id);
    NetWork random_attack(int percent);
    NetWork intentional_attack();
    #if 0
    int tarjan_scc(int ind);
    int number_of_scc();
    #endif
    int get_id_upper_bound();
    int nodes_in_largest_scc();
};


#endif
