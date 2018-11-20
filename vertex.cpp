#include "vertex.h"
#include <algorithm>

//Initialze Vertex no edges
Vertex::Vertex(int val):val(val){};

//Initialize Vertex with neighbors
Vertex::Vertex(int val, std::vector<Vertex> edgeList):val(val){
    for (auto &edge : edgeList){
        this->edges.push_back(edge);
    }
}

//Add an edge to the vertex
void Vertex::addEdge(Vertex& v){
    auto it = std::find_if(this->edges.begin(), this->edges.end(),[&v](const Vertex& vect){
        return vect.val == v.val;
    });
    if(it == this->edges.end()){
        this->edges.push_back(v);
    }
}