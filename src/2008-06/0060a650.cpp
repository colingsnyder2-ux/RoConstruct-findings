// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Counted
{
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Counted* count;
    ~Shared();
};

inline Shared::~Shared()
{
    Counted* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Base
{
    volatile unsigned long words[85];
    ~Base();
};

struct Tail
{
    unsigned long data;
    ~Tail();
};

struct S : Base
{
    Shared shared;
    Tail tail;
    ~S();
};

S::~S()
{
    words[0] = 0x00842d54;
    words[4] = 0x00842d44;
    words[5] = 0x00842d3c;
    words[8] = 0x00842d34;
    words[9] = 0x00842d24;
    words[17] = 0x00842d14;
    words[25] = 0x00842d04;
    words[33] = 0x00842cf4;
    words[41] = 0x00842ce4;
    words[49] = 0x00842cd4;
    words[76] = 0x00842cbc;
    _ReadWriteBarrier();
}
