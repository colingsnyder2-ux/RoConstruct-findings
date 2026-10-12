// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Argument
{
    unsigned long a;
    unsigned long b;
    unsigned long c;
    Control* control;
    unsigned long e;
};

struct S
{
    unsigned long value;
    void helper(Argument*);
    S* f(Argument);
};

S* S::f(Argument arg)
{
    value = 0;
    helper(&arg);
    Control* p = arg.control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
    return this;
}
