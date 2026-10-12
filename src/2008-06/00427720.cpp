// from server: 99% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

inline void __cdecl operator delete(void* p, void*)
{
    operator delete(p);
}

bool __cdecl func_0060a2f0();

struct String {
    unsigned char storage[28];
    __declspec(dllimport) String(const String&);
    __declspec(dllimport) ~String();
};

struct Node {
    unsigned int value;
    String text;
    Node(unsigned int, const String&);
};

inline Node::Node(unsigned int v, const String& s)
    : value(v), text(s)
{
}

extern unsigned char function_table[];

struct S {
    const void* table;
    unsigned int reserved;
    Node* object;

    S(unsigned int, String, unsigned int);
};

S::S(unsigned int value, String text, unsigned int)
{
    table = 0;
    if (!reinterpret_cast<bool (__cdecl*)(const unsigned int*)>(
            &func_0060a2f0)(&value)) {
        Node* node = static_cast<Node*>(operator new(sizeof(Node)));
        new (node) Node(value, text);
        object = node;
        table = function_table;
    } else {
        table = 0;
    }
}
