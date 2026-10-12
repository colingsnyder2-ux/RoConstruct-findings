// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct String {
    unsigned char storage[28];
    ~String();
};

extern void (__thiscall *StringDestroy)(String*);

inline String::~String()
{
    StringDestroy(this);
}

struct Base {
    volatile unsigned long words[76];
    ~Base();
};

struct S : Base {
    volatile unsigned long table;
    Shared shared;
    unsigned long padding;
    String text;
    ~S();
};

S::~S()
{
    words[0]  = 0x008376fc;
    words[4]  = 0x008376ec;
    words[5]  = 0x008376e4;
    words[8]  = 0x008376dc;
    words[9]  = 0x008376cc;
    words[17] = 0x008376bc;
    words[25] = 0x008376ac;
    words[33] = 0x0083769c;
    words[41] = 0x0083768c;
    words[49] = 0x0083767c;
    table     = 0x00837670;
}
