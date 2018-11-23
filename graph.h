#include "vertex.h"
#include <unordered_set>
class Graph{

private:
    int numNodes;
    std::vector<Vertex> vertices;

public:
    Graph(int num, std::vector<Vertex> graph);
    bool BFS(int value);
    std::vector<Vertex> getVertices();
  //  ~Graph();


};