// from server: 55% by king_originala
struct Edge {
    char padding[12];
    void* owner;
    int reserved;
    int firstIndex;
    int secondIndex;
};

struct EdgeArray {
    Edge** data;
    int size;
    int capacity;
    void resize(int count, Edge* const* value);
};

struct ValueArray {
    void** data;
    int size;
    int capacity;
    void resize(int count, void* const* value);
};

struct Primitive {
    void* owner;
    EdgeArray edges;
    ValueArray values;

    void remove(Edge* edge);
};

void Primitive::remove(Edge* edge)
{
    int index;
    if (owner == edge->owner)
        index = edge->firstIndex;
    else
        index = edge->secondIndex;

    Edge* lastEdge = edges.data[edges.size - 1];
    void* lastValue = values.data[values.size - 1];

    edges.data[index] = lastEdge;
    values.data[index] = lastValue;

    edges.resize(edges.size - 1, 0);
    values.resize(values.size - 1, 0);

    if (owner == lastEdge->owner)
        lastEdge->firstIndex = index;
    else
        lastEdge->secondIndex = index;

    if (owner == edge->owner)
        edge->firstIndex = -1;
    else
        edge->secondIndex = -1;
}
