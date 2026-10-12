// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern char table_837ad4[], table_837ac8[], table_837ac0[];
extern char table_837ab8[], table_837aa8[], table_837a98[];
extern char table_837a88[], table_837a78[], table_837a68[];
extern char table_837a58[], table_837a4c[];

struct Counted
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
    Counted* count;
    ~Shared();
};

struct Base
{
    volatile unsigned long words[0x13c / 4];
    ~Base();
};

struct Member
{
    unsigned char data[0x2c];
    ~Member();
};

struct Tail
{
    unsigned char data[0x20];
    ~Tail();
};

struct S : Base
{
    Member member;
    Shared shared;
    unsigned char padding[0x10];
    Tail first;
    Tail second;
    ~S();
};

__forceinline Shared::~Shared()
{
    Counted* p = count;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
    words[0] = (unsigned long)table_837ad4;
    words[0x10 / 4] = (unsigned long)table_837ac8;
    words[0x14 / 4] = (unsigned long)table_837ac0;
    words[0x20 / 4] = (unsigned long)table_837ab8;
    words[0x24 / 4] = (unsigned long)table_837aa8;
    words[0x44 / 4] = (unsigned long)table_837a98;
    words[0x64 / 4] = (unsigned long)table_837a88;
    words[0x84 / 4] = (unsigned long)table_837a78;
    words[0xa4 / 4] = (unsigned long)table_837a68;
    words[0xc4 / 4] = (unsigned long)table_837a58;
    words[0x130 / 4] = (unsigned long)table_837a4c;
    _ReadWriteBarrier();
}
