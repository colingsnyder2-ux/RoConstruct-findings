// from server: 52% by king_originala
struct Endpoint;

struct Node {
    char reserved[12];
    Endpoint* first;
    Endpoint* second;
    int firstIndex;
    int secondIndex;
};

struct NodeList {
    Node** data;
    int size;
    int capacity;
    void append(Node* const*);
};

struct EndpointList {
    Endpoint** data;
    int size;
    int capacity;
    void append(Endpoint* const*);
};

struct Primitive {
    Endpoint* owner;
    NodeList nodes;
    EndpointList endpoints;
    void func_005e8990(Node* node);
};

void Primitive::func_005e8990(Node* node)
{
    int index = nodes.size;

    if (owner == node->first)
        node->firstIndex = index;
    else
        node->secondIndex = index;

    nodes.append(&node);

    if (owner == node->first) {
        Endpoint* endpoint = node->second;
        endpoints.append(&endpoint);
    } else {
        Endpoint* endpoint = node->first;
        endpoints.append(&endpoint);
    }
}
