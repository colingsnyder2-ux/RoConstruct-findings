// from server: 89% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

__forceinline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

__forceinline void __cdecl operator delete(void* p, void*)
{
    operator delete(p);
}

struct Argument {
    char storage[44];
    ~Argument();
};

struct Stored {
    char storage[40];
    Stored(const Argument&);
};

struct Block {
    void* pointer;
    unsigned int padding;
    Stored value;

    Block(void*, const Argument&);
};

__forceinline Block::Block(void* p, const Argument& a)
    : pointer(p), value(a)
{
}

extern bool __cdecl func_0060a2f0(void**);
extern unsigned char manager;

struct S {
    void* table;
    unsigned int padding;
    Block* object;

    S(void*, unsigned int, Argument);
};

S::S(void* p, unsigned int, Argument a)
{
    table = 0;
    if (!func_0060a2f0(&p)) {
        void* storage = operator new(sizeof(Block));
        object = new (storage) Block(p, a);
        table = &manager;
    } else {
        table = 0;
    }
}
