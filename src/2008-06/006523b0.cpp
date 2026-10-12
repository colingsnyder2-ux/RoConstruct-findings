// from server: 51% by king_originala
void __cdecl operator delete(void*);

extern void (__thiscall *destroy_string)(void*);

struct String {
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct ProxyHolder {
    void* proxy;
    ~ProxyHolder();
};

__forceinline ProxyHolder::~ProxyHolder()
{
    operator delete(proxy);
}

struct Vector : ProxyHolder {
    unsigned int unused[2];
    String* first;
    String* last;
    String* limit;
    ~Vector();
};

__forceinline Vector::~Vector()
{
    if (first) {
        String* end = last;
        for (String* p = first; p != end; ++p)
            p->~String();
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
}

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int unused;
    Vector value;
    unsigned char color;
    unsigned char nil;
};

struct ScoreHud {
    void erase(Node*);
};

void ScoreHud::erase(Node* node)
{
    Node* next = node;
    while (!next->nil) {
        erase(next->right);
        next = next->left;
        node->value.~Vector();
        operator delete(node);
        node = next;
    }
}
