#include <vector>


class Vertex{

private:
    std::vector<Vertex> edges;
    int val;

public:
    Vertex(int val);
    Vertex(int val, std::vector<Vertex> edgeList);
    void addEdge(Vertex &v);
   // ~Vertex();


};