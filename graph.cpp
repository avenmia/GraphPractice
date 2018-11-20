#include "graph.h"

//Constructor
Graph::Graph(int num, std::vector<Vertex> graph):numNodes(num){
    for(auto node : graph){
        this->vertices.push_back(node);
    }
}