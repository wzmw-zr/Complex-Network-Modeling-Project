# Complex-Network-Project

本项目运行的环境要求：

+ G++ 11.1.0
+ CMake 3.21.3
+ Qt 5.15.2
+ Python 3.9.7
+ matplotlib  3.3.3

在编译之前，需要修改python文件夹下的objects.h文件，因为Python.h文件中定义了slots宏，与Qt发生了冲突，将其中的`slots`宏`undefine`掉，找到第201行，进行如下修改：

```c++
#undef slots //这里添加
typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    PyType_Slot *slots; /* terminated by slot==0. */
} PyType_Spec;
#define slots Q_SLOTS //这里添加
```

编译：

```shell
mkdir build
cd build
cmake ..
make
```

在build文件夹下运行：

```shell
./app
```



## Project值得一提的点

### 1. 使用哈希表模拟邻接表

一般来说，图常见的存储方式有邻接矩阵、邻接表、链式前向星等，本项目针根据涉及到的操作，使用哈希表模拟邻接表，加速相关操作。

设图G = (V, E)，顶点集V大小为m，边集E大小为n。

考虑到计算coreness、random attack、intentional attack操作需要频繁地进行点的查找与删除操作，如果使用临接表，一次顶点的查找与删除操作：从邻接表中删除该顶点，然后删除相邻顶点里的对应的边（或节点），时间复杂度为$O(N^2+M)$，但是，使用哈希表模拟邻接表，一次顶点的查找与删除操作的时间复杂度为$O(N)$（如果该点与其余所有点相邻）。

```c++
struct Node {
    int id;
    // random generated coordinates
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
    /*** 
    ***/
};
```

而且，**使用哈希表模拟邻接表不会增加其余操作的时间复杂度**。



### 2. 使用并查集求解连通分量

因为并查集能够维护连通性（比如在最小生成树的Kruscal算法中就使用了并查集维护节点的连通性），本项目也使用并查集求解连通分量的数量与最大连通分量中节点的个数，并且对并查集使用路径压缩优化，由于按秩合并优化并没有带来明显的速度提升，所以本项目没有加入按秩合并优化。



### 3. 无权无向图最短路 — BFS

比较常用的计算最短路的算法有：基于动态规划的多源最短路Floyd-Warshall算法，时间复杂度$O(N^3)$，基于动态规划的单源最短路Bellman-Ford算法，时间复杂度$O(NM)$，计算所有节点的最短路的时间复杂度$O(N^2M)$，基于贪心的单源最短路Dijstra算法，时间复杂度$O(N\log(N+M))$，计算所有节点最短路的时间复杂度$O(N^2\log(N+M))$等。这些都是应用在带权图上的，而本项目建立的是无向无权图，因此，只需要使用广度优先搜索(BFS)，单个节点最短路的时间复杂度为$O(N+M)$，所有结点最短路的时间复杂度为$O(N(N+M))$。



### 4. 网络图与节点图的绘制

节点的坐标是随机生成的，使用Python的matplotlib库绘制网络图与度数分布图。

