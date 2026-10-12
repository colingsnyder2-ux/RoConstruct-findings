// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    RefCount* count;
    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct SubBase
{
    virtual ~SubBase();
    unsigned long data;
};

struct Sub : SubBase
{
    virtual ~Sub();
};

inline Sub::~Sub()
{
}

struct Base
{
    virtual ~Base();
    unsigned char data[0x88];
};

struct CChatPrompt : Base
{
    Shared first;
    Sub sub;
    Shared second;

    void reset(int, int);
    virtual ~CChatPrompt();
};

CChatPrompt::~CChatPrompt()
{
    reset(0, 0);
}
