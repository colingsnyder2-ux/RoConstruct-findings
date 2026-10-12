// from server: 99% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
void __cdecl operator delete(void*, void*);

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct StringData {
    char storage[32];
    StringData(const StringData&);
};

struct Value {
    int key;
    StringData text;

    Value(const Value&);
};

inline Value::Value(const Value& v)
    : key(v.key), text(v.text)
{
}

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Value value;
    unsigned char color;
    unsigned char nil;

    Node(Node*, Node*, Node*, const Value&, unsigned char);
};

inline Node::Node(Node* l, Node* p, Node* r,
                  const Value& v, unsigned char c)
    : left(l), parent(p), right(r), value(v), color(c), nil(0)
{
}

Node* __stdcall makeNode(Node* left, Node* parent, Node* right,
                         const Value* value, unsigned char color)
{
    void* p = operator new(sizeof(Node));
    try {
        new (p) Node(left, parent, right, *value, color);
    }
    catch (...) {
        operator delete(p);
        throw;
    }
    return static_cast<Node*>(p);
}
