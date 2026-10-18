// from server: 69% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

extern "C" void __cdecl release(void*);
extern "C" void __cdecl deallocate(void*);

struct Storage
{
    void* allocation;
    unsigned char reserved0[8];
    void* begin;
    void* end;
    void* capacity;
    unsigned char reserved1[4];
    void* owner;
    ~Storage();
};

struct Storage2
{
    void* first;
    unsigned int reserved[2];
    void* begin;
    void* end;
    void* limit;
    unsigned int extra;
    void* last;
    ~Storage2();
};

struct List
{
    unsigned char reserved[32];
    void remove(void*);
};

struct Owner
{
    unsigned char reserved[36];
    List first;
    List second;
};

struct Guard
{
    void* object;
    Control* control;
    Guard(Shared);
    ~Guard();
};

struct S
{
    unsigned long table;
    unsigned char reserved[0x50];
    unsigned long table2;
    unsigned char reserved2[0x20];
    unsigned long table3;
    unsigned char reserved3[0x20];
    Shared observed;
    unsigned long reserved4;
    Shared owner;

    ~S();
};

S::~S()
{
    table = 0x818a74;
    table2 = 0x818a5c;
    table3 = 0x818a48;

    Guard guard(observed);
    if (owner.object)
        static_cast<Owner*>(owner.object)->first.remove(&table2);
    if (owner.object)
        static_cast<Owner*>(owner.object)->second.remove(&table3);
}
