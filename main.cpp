#include <stdio.h>
#include <iostream>
#include "graph.h"

/* Graph Example
*   1----5
*  /
* 0 ---- 3
*  \     |
*   2 -- 4
*/




int main(int argc, char* argv[]){
    
    Vertex v0(0);
    Vertex v1(1);
    Vertex v2(2);
    Vertex v3(3);
    Vertex v4(4);
    Vertex v5(5);
    
    v0.addEdge(v1);
    v0.addEdge(v2);
    v0.addEdge(v3);
    v1.addEdge(v5);
    v2.addEdge(v4);
    v3.addEdge(v4);

    std::vector<Vertex> v;
    v.push_back(v0);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    Graph g(6, v);
    if(g.BFS(2)){
        std::cout << "Found 2!" << std::endl;
    }

    return 0;
}