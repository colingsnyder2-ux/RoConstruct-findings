// from server: 99% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

inline void __cdecl operator delete(void* p, void*)
{
    operator delete(p);
}

bool __cdecl func_0060a2f0();
extern unsigned int dispatch_table[];

struct Argument
{
    unsigned char data[40];
    ~Argument();
};

struct StoredArgument
{
    unsigned char data[36];
    StoredArgument(const Argument&);
};

struct Node
{
    unsigned int value;
    StoredArgument argument;

    Node(unsigned int, const Argument&);
};

inline Node::Node(unsigned int value_, const Argument& argument_)
    : value(value_), argument(argument_)
{
}

struct S
{
    unsigned int* dispatch;
    unsigned int reserved;
    Node* node;

    S(unsigned int, Argument);
};

S::S(unsigned int value, Argument argument)
{
    dispatch = 0;

    if (!reinterpret_cast<bool (__cdecl*)(unsigned int*)>(
            func_0060a2f0)(&value))
    {
        Node* p = static_cast<Node*>(operator new(sizeof(Node)));
        new (p) Node(value, argument);
        node = p;
        dispatch = dispatch_table;
    }
    else
    {
        dispatch = 0;
    }
}
