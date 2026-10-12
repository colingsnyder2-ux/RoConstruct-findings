// from server: 100% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

__forceinline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

__forceinline void __cdecl operator delete(void*, void*)
{
}

struct Payload {
    char storage[24];
    Payload(const Payload&);
};

struct Value {
    unsigned int first;
    unsigned int second;
    Payload payload;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Value value;
    unsigned char color;
    unsigned char nil;

    Node(Node*, Node*, Node*, const Value&, unsigned char);
};

__forceinline Node::Node(Node* l, Node* p, Node* r,
                         const Value& v, unsigned char c)
    : left(l), parent(p), right(r), value(v), color(c), nil(0)
{
}

Node* __stdcall create(Node* left, Node* parent, Node* right,
                       const Value& value, unsigned char color)
{
    Node* p = static_cast<Node*>(operator new(sizeof(Node)));
    try {
        new(p) Node(left, parent, right, value, color);
    }
    catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
