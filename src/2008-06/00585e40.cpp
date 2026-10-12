// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct RefCount
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    RefCount* control;
    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct String
{
    unsigned char data[28];
    ~String();
};

extern void (__thiscall *destroy_string)(String*);

inline String::~String()
{
    destroy_string(this);
}

struct Base
{
    volatile unsigned long slots[76];
    ~Base();
};

struct S : Base
{
    Shared shared;
    String text;
    ~S();
};

S::~S()
{
    slots[0]  = 0x008311dc;
    slots[4]  = 0x008311cc;
    slots[5]  = 0x008311c4;
    slots[8]  = 0x008311bc;
    slots[9]  = 0x008311ac;
    slots[17] = 0x0083119c;
    slots[25] = 0x0083118c;
    slots[33] = 0x0083117c;
    slots[41] = 0x0083116c;
    slots[49] = 0x0083115c;
    _ReadWriteBarrier();
}
