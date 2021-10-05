/*************************************************************************
	> File Name: parser.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年09月18日 星期六 18时48分39秒
 ************************************************************************/

#include "NetWork.h"

using PII = std::pair<int, int>;
using std::greater;
using std::fstream;

UnionSet::UnionSet(int n) : n(n), fa(vector<int>(n)), val(vector<int>(n, 1)) {
    for (int i = 0; i < n; i++) fa[i] = i;
}

// merge two sets of nodes (might be same set)
void UnionSet::merge(int x, int y) {
    int a = get(x);
    int b = get(y);
    if (a == b) return ;
    fa[a] = b;
    val[b] += val[a];
    n--;
}

// get the root node of set which `@param x`  belongs to.
int UnionSet::get(int x) {
    return fa[x] = x == fa[x] ? x : get(fa[x]);
}

Node::Node(int id) : id(id), next(unordered_set<int>()) {
    // randomly generate the position of node
    x = rand() % 10000;
    y = rand() % 10000;
}

// Constructor of given path of file `@param path`
// read data from file and construct the  network
NetWork::NetWork(string path) : path(path), nodes(unordered_map<int, Node>()) {
    srand(time(0));
    auto fin = fstream(path);
    for (int i = 0; i < 4; i++) {
        string s;
        getline(fin, s);
    }
    int from, to;
    unordered_set<int> st;
    vector<PII> edges;
    while (fin >> from >> to) {
        st.insert(from);
        st.insert(to);
        edges.push_back({from, to});
    }
    vector<int> nums;
    for (int x : st) nums.push_back(x);
    sort(nums.begin(), nums.end());
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        nodes[i] = Node(i);
        mp[nums[i]] = i;
    }
    for (auto &&[x, y] : edges) {
        if (x == y) continue;
        nodes[mp[x]].next.insert(mp[y]);
        nodes[mp[y]].next.insert(mp[x]);
    }
}

// Constructor of given network
NetWork::NetWork(unordered_map<int, Node> nodes) : path(""), nodes(nodes) {}

int NetWork::num_nodes() { return nodes.size(); }

int NetWork::num_edges() {
    int ans = 0;
    for (auto [id, node] : nodes) ans += node.next.size();
    ans /= 2;
    return ans;
}

int NetWork::node_degree(int id) {
    return nodes[id].next.size();
}

double NetWork::average_degree() {
    int num_nodes = nodes.size();
    int num_degree = 0;
    for (auto [id, node] : nodes) num_degree += node.next.size();
    return 1.0 * num_degree / num_nodes;
}

int NetWork::max_degree() {
    int mmax = 0;
    for (auto [id, node] : nodes) mmax = max(mmax, (int) node.next.size());
    return mmax;
}

vector<PII> NetWork::degree_distribution() {
    unordered_map<int, int> mp;
    for (auto [id, node] : nodes) mp[node.next.size()]++;
    vector<PII> ans;
    for (auto [deg, cnt] : mp) ans.push_back({deg, cnt});
    sort(ans.begin(), ans.end());
    return ans;
}

void NetWork::dijstra(int id, vector<vector<int>> &dis) {
    int n = nodes.size();
    unordered_map<int, int> check;
    priority_queue<PII, vector<PII>, greater<PII>> que;
    que.push(PII(0, id));
    while (!que.empty() && n) {
        auto [dist, ind] = que.top();
        que.pop();
        if (check.count(ind)) continue;
        check[ind] = 1;
        dis[id][ind] = dist;
        n--;
        for (auto t : nodes[ind].next) {
            if (check.count(t)) continue;
            auto temp = PII(dist + 1, t);
            que.push(PII(dist + 1, t));
        }
    }
}

void NetWork::bfs(int id, vector<vector<int>> &dis) {
    std::cout << "id = " << id << std::endl;
    int n = nodes.size();
    unordered_map<int, int> check;
    queue<PII> que;
    que.push({0, id});
    while (!que.empty() && n) {
        auto [dist, ind] = que.front();
        que.pop();
        if (check.count(ind)) continue;
        check[ind] = 1;
        dis[id][ind] = dist;
        n--;
        for (auto t : nodes[ind].next) {
            if (check.count(t)) continue;
            que.push({dist + 1, t});
        }
    }
}

tuple<double, int> NetWork::average_path_length_and_diameter() {
    int n = 0;
    for (auto [id, node] : nodes) n = max(n, id + 1);
    vector<vector<int>> dis(n, vector<int>(n, INT32_MAX));
    for (auto [id, node] : nodes) bfs(id, dis);
    long sum = 0;
    int diameter = 0;
    int path_cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dis[i][j] == INT32_MAX) continue;
            sum += dis[i][j];
            path_cnt++;
            diameter = max(diameter, dis[i][j]);
        }
    }
    return tuple<double, int>(1.0 * sum / path_cnt, diameter);
}

double NetWork::cluster_coefficient_node(int id) {
    int k = nodes[id].next.size();
    if (k <= 1) return 0.0;
    int t = k * (k - 1) / 2;
    int e = 0;
    for (int x : nodes[id].next) {
        for (int y : nodes[id].next) {
            if (nodes[x].next.count(y)) e++;
        }
    }
    e /= 2;
    return 1.0 * e / t;
}

double NetWork::cluster_coefficient_graph() {
    int n = nodes.size();
    double sum = 0.0;
    for (auto [id, node] : nodes) sum += cluster_coefficient_node(id);
    return sum / n;
}

void NetWork::remove_k_degree_nodes(int k, unordered_map<int, Node> &graph, vector<int> &coreness, int &rest) {
    int n = 0;
    for (auto [id, node] : nodes) n = max(n, id + 1);
    vector<int> check(n, 0);
    queue<int> que;
    for (auto [id, node] : graph) {
        if (!node.next.size()) continue;
        if (node.next.size() < k) {
            que.push(id);
            check[id] = 1;
        }
    }
    while (!que.empty()) {
        int t = que.front();
        que.pop();
        coreness[t] = k - 1;
        rest--;
        if (!graph[t].next.size()) continue;
        for (int x : graph[t].next) {
            graph[x].next.erase(t);
            if (graph[x].next.size() < k && !check[x]) {
                check[x] = 1;
                que.push(x);
            }
        }
        graph[t].next.clear();
    }
}

int NetWork::coreness_of_node(int ind) {
    if (nodes[ind].next.size() == 0) return 0;
    int n = 0;
    for (auto [id, node] : nodes) n = max(n, id + 1);
    unordered_map<int, Node> graph = nodes;
    vector<int> coreness(n, 0);
    int k = 1, rest = 0;
    while (graph[ind].next.size()) {
        remove_k_degree_nodes(k, graph, coreness, rest);
        k++;
    }
    return k - 2;
    #if 0
    for (auto [id, node] : graph) rest += node.next.size() ? 1 : 0;
    while (rest) {
        remove_k_degree_nodes(k, graph, coreness, rest);
        k++;
    }
    return coreness[ind];
    #endif
}

int NetWork::coreness_of_graph() {
    int n = 0;
    for (auto [id, node] : nodes) n = max(n, id + 1);
    unordered_map<int, Node> graph = nodes;
    vector<int> coreness(n, 0);
    int k = 1, rest = 0;
    for (auto [id, node] : graph) rest += node.next.size() ? 1 : 0;
    while (rest) {
        remove_k_degree_nodes(k, graph, coreness, rest);
        k++;
    }
    int ans = 0;
    for (int x : coreness) ans = max(ans, x);
    return ans;
}

void NetWork::attack(unordered_map<int, Node> &graph, int id) {
    for (int x : graph[id].next) graph[x].next.erase(id);
    graph.erase(id);
}

NetWork NetWork::random_attack(int percent) {
    int mmax = 0;
    for (auto [id, node] : nodes) mmax = max(mmax, id + 1);
    vector<int> check(mmax, 0);
    int num_attack = nodes.size() * percent / 100;
    unordered_map<int, Node> graph = nodes;
    vector<int> nodes_to_attack(num_attack);
    int ind = 0;
    while (ind < num_attack) {
        int id = rand() % mmax;
        if (check[id]) continue;
        nodes_to_attack[ind++] = id;
        check[id] = 1;
        ind++;
    }
    for (int id : nodes_to_attack) attack(graph, id);
    return NetWork(graph);
}

NetWork NetWork::intentional_attack(int degree) {
    unordered_map<int, Node> graph = nodes;
    vector<int> nodes_to_attack;
    for (auto [id, node] : graph) {
        if (node.next.size() <= degree) nodes_to_attack.push_back(id);
    }
    for (int id : nodes_to_attack) attack(graph, id);
    return NetWork(graph);
}

int NetWork::get_id_upper_bound() {
    int ans = 0;
    for (auto [id, node] : nodes) ans = max(ans, id + 1);
    return ans;
}

std::tuple<int, int> NetWork::number_of_scc_and_nodes_in_largest_scc() {
    int cnt = 0;
    unordered_map<int, int> mp;
    for (auto [id, node] : nodes) mp[id] = cnt++;
    UnionSet u(cnt);
    for (auto [id, node] : nodes) {
        for (int x : node.next) {
            u.merge(mp[id], mp[x]);
        }
    }
    int ans = 0;
    for (int i = 0; i < cnt; i++) ans = max(ans, u.val[u.get(i)]);
    return std::tuple<int, int>(u.n, ans);
}

void NetWork::draw_network(string s) {
    // Py_Initialize();
    // PyRun_SimpleString("import matplotlib.pyplot as plt");
    /*
     * Add vertices to the graph.
     */
    for (auto [id, node] : nodes) {
        std::string command = "";
        command += "plt.scatter(";
        command += std::to_string(node.x);
        command += ",";
        command += std::to_string(node.y);
        command += ", s = 10)";

        PyRun_SimpleString(command.c_str());
    }

    /*
     * Add edges to the graph.
     */
    for (auto [id, node] : nodes) {
        for (int ind : node.next) {
            std::string command = "";
            command += "plt.plot([";
            command += std::to_string(node.x);
            command += ",";
            command += std::to_string(nodes[ind].x);
            command += "], [";
            command += std::to_string(node.y);
            command += ",";
            command += std::to_string(nodes[ind].y);
            command += "], color=\"grey\")";
            PyRun_SimpleString(command.c_str());
        }
    }
    PyRun_SimpleString("plt.title(\"Network Structure\")");
    string command = "plt.savefig(\"" + s + "\")";
    PyRun_SimpleString(command.c_str());
    PyRun_SimpleString("plt.close()");
    // PyRun_SimpleString("plt.show()");
    // Py_Finalize();
}

void NetWork::draw_degree_distribution(string s) {
    // Py_Initialize();
    // PyRun_SimpleString("import matplotlib.pyplot as plt");
    auto deg_and_cnt = degree_distribution();

    int ind = 0;
    string arr_x = "[";
    string arr_y = "[";
    for (auto &&[deg, cnt] : deg_and_cnt) {
        if (ind) arr_x += ",", arr_y += ",";
        arr_x += std::to_string(deg);
        arr_y += std::to_string(cnt);
        ind++;
    }
    arr_x += "]";
    arr_y += "]";

    string command = "plt.bar(" + arr_x + "," + arr_y + "," + ")";
    PyRun_SimpleString(command.c_str());
    PyRun_SimpleString("plt.legend()");
    PyRun_SimpleString("plt.xlabel(\"Degree\")");
    PyRun_SimpleString("plt.ylabel(\"Count\")");
    PyRun_SimpleString("plt.title(\"Degree Distribution\")");
    command = "plt.savefig(\"" + s + "\")";
    PyRun_SimpleString(command.c_str());
    PyRun_SimpleString("plt.close()");
    // PyRun_SimpleString("plt.show()");
    // PyRun_SimpleString("plt.close()");
    // Py_Finalize();
}


