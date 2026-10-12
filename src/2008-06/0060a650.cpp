// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern unsigned char table_842d54[];
extern unsigned char table_842d44[];
extern unsigned char table_842d3c[];
extern unsigned char table_842d34[];
extern unsigned char table_842d24[];
extern unsigned char table_842d14[];
extern unsigned char table_842d04[];
extern unsigned char table_842cf4[];
extern unsigned char table_842ce4[];
extern unsigned char table_842cd4[];
extern unsigned char table_842cbc[];

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
    void* volatile words[85];
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
    words[0] = table_842d54;
    words[4] = table_842d44;
    words[5] = table_842d3c;
    words[8] = table_842d34;
    words[9] = table_842d24;
    words[17] = table_842d14;
    words[25] = table_842d04;
    words[33] = table_842cf4;
    words[41] = table_842ce4;
    words[49] = table_842cd4;
    _ReadWriteBarrier();
    words[76] = table_842cbc;
    _ReadWriteBarrier();
}
