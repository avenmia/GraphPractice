#include <vector>


class Vertex{

private:
    std::vector<Vertex> edges;
    int val;

public:
    Vertex(int val);
    Vertex(int val, std::vector<Vertex> edgeList);
    void addEdge(Vertex &v);
    std::vector<Vertex> getEdges();
    int getValue() const;
    bool operator ==(const Vertex & obj) const;
   // ~Vertex();


};

namespace std{
    template<>
        struct hash<Vertex>
        {
            size_t
            operator()(const Vertex & v1) const{
                return hash<int>()(v1.getValue());
            }
        };
}

//Custom comparator
struct VertexComparator{
    bool
    operator()(const Vertex & v1, const Vertex & v2) const{
        if(v1.getValue() == v2.getValue()){
            return true;
        }
        else{
            return false;
        }
    }
};