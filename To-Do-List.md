1. 读取文件并建图
2. 计算统计信息:

   + number of nodes [Done]
   + number of edges [Done]
   + average degree 
   + degree distribution

   + average path length : $L$， average over all distance $d_{i,j}$
   + Diameter: $D=\max\{d_{i,j}\}$
   + clustering coefficient：
     + if node i has $k(i)$ neighbors
     + $E(i)$：number of edges those neighbors have after remove node i, or the edges in these neighbors.
     + $T(i)$：number of edges these neighbors can possibly have, $T(i)=\frac{k(i) * (k(i)-1)}{2}$.
     + $C(i)=\frac{E(i)}{T(i)}$.
     + $C$ equals the average of $C(i)$.
   + Coreness
3. 完成random attack与intentional attack
4. 为intentional attack增加指定degree或者coreness攻击的mode
5. 统计连通分量
6. 统计最大子图的节点数量

一个debug了很长时间才发现的错误：在弹出优先队列的堆顶元素之前，使用`auto &&[x, y] = que.top()`，会导致`que.pop()`之后`x,y`的内存失效，导致后续访问到的值会发生变化。「解决方法：==如果需要弹出堆顶元素，那么就不要使用引用！！！==」

