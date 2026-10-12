// from server: 96% by king_originala
typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);
inline void * __cdecl operator new(size_t, void *p) { return p; }
void __cdecl operator delete(void *, void *);

struct Text {
    unsigned char data[24];
    Text(const Text &);
    ~Text();
};

struct Value {
    unsigned int number;
    Text text;
};

struct Node {
    Node *first;
    Node *second;
    Node *third;
    Value value;
    unsigned char flag;
    unsigned char zero;

    Node(Node *, Node *, Node *, const Value &, unsigned char);
};

Node::Node(Node *a, Node *b, Node *c, const Value &v, unsigned char f)
    : first(a), second(b), third(c), value(v), flag(f), zero(0)
{
}

Node * __stdcall makeNode(Node *a, Node *b, Node *c,
                          const Value *v, unsigned char flag)
{
    void *storage = operator new(sizeof(Node));
    try {
        return new (storage) Node(a, b, c, *v, flag);
    }
    catch (...) {
        operator delete(storage);
        throw;
    }
}
