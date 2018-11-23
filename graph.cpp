#include "graph.h"

//Constructor
Graph::Graph(int num, std::vector<Vertex> graph):numNodes(num){
    for(auto node : graph){
        this->vertices.push_back(node);
    }
}

std::vector<Vertex> Graph::getVertices(){
    return this->vertices;
}

//Breadth First Search
bool Graph::BFS(int value){
    std::vector<Vertex> queue; 
    std::unordered_set<Vertex> visited; //Holds visited vertices
    std::vector<Vertex> gVertices = this->getVertices();
    int graphSize = gVertices.size();
    if(graphSize > 0){
        Vertex startVertex = this->getVertices().front();
        queue.push_back(startVertex);
         while(queue.size() > 0){
             std::vector<Vertex> neighbors = startVertex.getEdges();
             for(auto &neighbor : neighbors){
                 if(neighbor.getValue() == value){
                     return true;
                 }
                 if(visited.find(neighbor) != visited.end()){
                     queue.push_back(neighbor);
                 }    
             }
             visited.insert(startVertex);
             startVertex = queue.front();
             queue.erase(queue.begin());
         }
        return false;
    }
    else {
        return false;
    }
    
    

    
    

}