// from server: 84% by king_originala
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

struct Callback
{
    unsigned char data[56];
    Callback(const Callback&);
    ~Callback();
};

bool __cdecl func_0060a2f0(const int*);
extern unsigned char function_table;

struct Node
{
    int value;
    Callback callback;

    Node(int, const Callback&);
};

__forceinline Node::Node(int v, const Callback& c)
    : value(v), callback(c)
{
}

struct Creator
{
    const void* table;
    unsigned int reserved;
    Node* target;

    Creator(int, Callback, unsigned int);
};

Creator::Creator(int value, Callback callback, unsigned int unused)
{
    table = 0;
    if (!func_0060a2f0(&value))
    {
        Node* p = static_cast<Node*>(operator new(sizeof(Node)));
        if (p)
            new (p) Node(value, callback);
        target = p;
        table = &function_table;
    }
    else
    {
        table = 0;
    }
}
