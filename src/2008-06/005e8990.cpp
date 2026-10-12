// from server: 61% by king_originala
struct Owner;

struct Edge
{
    char padding[12];
    Owner* first;
    Owner* second;
    int firstIndex;
    int secondIndex;
};

struct EdgeVector
{
    Edge** data;
    int size;
    int capacity;

    void push_back(Edge* const& value);
};

struct OwnerVector
{
    Owner** data;
    int size;
    int capacity;

    void push_back(Owner* const& value);
};

struct Primitive
{
    Owner* owner;
    EdgeVector edges;
    OwnerVector neighbors;

    void addEdge(Edge* edge);
};

void Primitive::addEdge(Edge* edge)
{
    Edge* saved = edge;
    int index = edges.size;

    if (owner == saved->first)
        saved->firstIndex = index;
    else
        saved->secondIndex = index;

    edges.push_back(edge);

    if (owner == saved->first)
        neighbors.push_back(static_cast<Owner*>(static_cast<void*>(saved->second)));
    else
        neighbors.push_back(static_cast<Owner*>(static_cast<void*>(saved->first)));
}
