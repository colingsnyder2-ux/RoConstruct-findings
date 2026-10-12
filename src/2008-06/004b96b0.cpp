// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void __cdecl operator delete(void*) throw();

struct Object {
    virtual ~Object();
};

struct Owner {
    Object* p;
    ~Owner();
};

__forceinline Owner::~Owner()
{
    if (p) delete p;
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* p;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* c = control;
    if (c && _InterlockedExchangeAdd(&c->strong, -1) == 0) {
        c->dispose();
        if (_InterlockedExchangeAdd(&c->weak, -1) == 0)
            c->destroy();
    }
}

struct Base {
    unsigned long table;
    char a[12];
    unsigned long table10;
    unsigned long table14;
    char b[8];
    unsigned long table20;
    unsigned long table24;
    char c[28];
    unsigned long table44;
    char d[28];
    unsigned long table64;
    char e[28];
    unsigned long table84;
    char f[28];
    unsigned long tablea4;
    char g[28];
    unsigned long tablec4;
    char h[0x2b74 - 0xc8];
    ~Base();
};

struct Sub {
    virtual ~Sub();
    char data[8];
};

struct Container32 {
    char data[32];
    ~Container32();
};

struct Container44 {
    char data[44];
    ~Container44();
};

struct Container28 {
    char data[28];
    ~Container28();
};

struct Other32 {
    char data[32];
    ~Other32();
};

struct Head {
    void* p;
    ~Head();
};

__forceinline Head::~Head()
{
    operator delete(p);
}

struct Tree {
    Head head;
    char data[28];
    void clear();
    ~Tree();
};

__forceinline Tree::~Tree()
{
    clear();
}

struct Buffer {
    void* storage;
    unsigned long a;
    unsigned long b;
    void* first;
    void* last;
    void* limit;
    unsigned long c;
    ~Buffer();
};

__forceinline Buffer::~Buffer()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    operator delete(storage);
}

struct ContainerBase {
    char data[36];
    ~ContainerBase();
};

struct LargeContainer : ContainerBase {
    void* storage;
    unsigned long a;
    unsigned long b;
    void* first;
    void* last;
    void* limit;
    char tail[8];
    ~LargeContainer();
};

__forceinline LargeContainer::~LargeContainer()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    operator delete(storage);
}

struct Callback {
    typedef void (__thiscall *Function)(Callback*, Sub*);
    Function* table;
};

struct S : Base {
    Sub sub;
    Owner owner2b80;
    Owner owner2b84;
    Shared shared;
    Container32 container2b90;
    LargeContainer container2bb0;
    LargeContainer container2bf4;
    Other32 container2c38;
    Buffer buffer2c58;
    Container28 container2c74;
    Container32 container2c90;
    Container44 container2cb0;
    Tree tree2cdc;
    Container32 container2cfc;
    Owner owner2d1c;
    Owner owner2d20;
    Owner owner2d24;
    Owner owner2d28;
    Owner owner2d2c;
    Owner owner2d30;
    Owner owner2d34;
    Owner owner2d38;
    Owner owner2d3c;
    Owner owner2d40;
    Owner owner2d44;
    Owner owner2d48;
    unsigned long padding2d4c;
    Callback* volatile callback;
    ~S();
};

S::~S()
{
    Sub* s = &sub;
    *reinterpret_cast<volatile unsigned long*>(&table) = 0x8254fc;
    *reinterpret_cast<volatile unsigned long*>(&table10) = 0x8254f0;
    *reinterpret_cast<volatile unsigned long*>(&table14) = 0x8254e8;
    *reinterpret_cast<volatile unsigned long*>(&table20) = 0x8254e0;
    *reinterpret_cast<volatile unsigned long*>(&table24) = 0x8254d0;
    *reinterpret_cast<volatile unsigned long*>(&table44) = 0x8254c0;
    *reinterpret_cast<volatile unsigned long*>(&table64) = 0x8254b0;
    *reinterpret_cast<volatile unsigned long*>(&table84) = 0x8254a0;
    *reinterpret_cast<volatile unsigned long*>(&tablea4) = 0x825490;
    *reinterpret_cast<volatile unsigned long*>(&tablec4) = 0x825480;
    *reinterpret_cast<volatile unsigned long*>(s) = 0x825450;
    Callback* c = callback;
    if (c)
        c->table[59](c, s);
}
