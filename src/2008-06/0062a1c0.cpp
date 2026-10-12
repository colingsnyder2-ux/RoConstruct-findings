// from server: 92% by king_originala
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

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) - 1 == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
                p->destroy();
        }
    }
}

struct EmptyCall
{
    char storage[40];

    EmptyCall();
    ~EmptyCall();
};

__declspec(noreturn) void __cdecl throwEmpty(const EmptyCall&);

struct Table
{
    void* unused;
    void (__cdecl *invoke)(void*, Shared, float);
};

struct S
{
    Table* table;
    unsigned long reserved;
    unsigned char bound[1];

    void f(Shared, float);
};

void S::f(Shared value, float number)
{
    if (!table)
        throwEmpty(EmptyCall());

    table->invoke(bound, value, number);
}
