// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void __cdecl operator delete(void *) throw();

extern unsigned long table_0[];
extern unsigned long table_10[];
extern unsigned long table_14[];
extern unsigned long table_20[];
extern unsigned long table_24[];
extern unsigned long table_44[];
extern unsigned long table_64[];
extern unsigned long table_84[];
extern unsigned long table_A4[];
extern unsigned long table_C4[];
extern unsigned long table_130[];
extern unsigned long table_134[];

struct Counted {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void *object;
    Counted *count;
    ~Shared();
};

inline Shared::~Shared()
{
    Counted *p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Resource {
    char storage[4];
    ~Resource();
};

struct Owned {
    char storage[4];
    Resource resource;
    ~Owned();
};

inline Owned::~Owned()
{
}

struct Thread {
    void *handle;
    int field_4;
    char flag_8;
    ~Thread();
};

struct OwnedPointer {
    Owned *pointer;
    ~OwnedPointer();
};

inline OwnedPointer::~OwnedPointer()
{
    delete pointer;
}

struct ThreadPointer {
    Thread *pointer;
    ~ThreadPointer();
};

inline ThreadPointer::~ThreadPointer()
{
    delete pointer;
}

struct Member13C {
    char storage[0x20];
    ~Member13C();
};

struct Member15C {
    char storage[0x2c];
    ~Member15C();
};

struct Member188 {
    char storage[0x18];
    ~Member188();
};

struct Member1D0 {
    void *object;
    bool criticalSection;
    ~Member1D0();
};

struct Member1D8 {
    char storage[0x18];
    ~Member1D8();
};

struct Base {
    unsigned long *volatile table0;
    char pad04[0x0c];
    unsigned long *volatile table10;
    unsigned long *volatile table14;
    char pad18[8];
    unsigned long *volatile table20;
    unsigned long *volatile table24;
    char pad28[0x1c];
    unsigned long *volatile table44;
    char pad48[0x1c];
    unsigned long *volatile table64;
    char pad68[0x1c];
    unsigned long *volatile table84;
    char pad88[0x1c];
    unsigned long *volatile tableA4;
    char padA8[0x1c];
    unsigned long *volatile tableC4;
    char padC8[0x68];
    unsigned long *volatile table130;
    unsigned long *volatile table134;
    char pad138[4];
    ~Base();
};

struct ScriptContext : Base {
    Member13C member13C;
    Member15C member15C;
    Member188 member188;
    Shared member1A0;
    OwnedPointer member1A8;
    char pad1AC[4];
    Shared member1B0;
    char pad1B8[0x14];
    ThreadPointer member1CC;
    Member1D0 member1D0;
    Member1D8 member1D8;
    void *volatile memory;
    ~ScriptContext();
};

ScriptContext::~ScriptContext()
{
    table0 = table_0;
    table10 = table_10;
    table14 = table_14;
    table20 = table_20;
    table24 = table_24;
    table44 = table_44;
    table64 = table_64;
    table84 = table_84;
    tableA4 = table_A4;
    tableC4 = table_C4;
    table130 = table_130;
    table134 = table_134;
    operator delete(memory);
}
