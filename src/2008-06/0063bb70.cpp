// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strongCount;
    volatile long weakCount;
};

struct Argument
{
    void* first;
    void* second;
    Control* control;
    void* fourth;
};

struct S
{
    void* value;

    void initialize(Argument*);
    S* f(Argument);
};

S* S::f(Argument argument)
{
    value = 0;
    initialize(&argument);

    Control* control = argument.control;
    if (control)
    {
        if (_InterlockedExchangeAdd(&control->strongCount, -1) == 1)
        {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weakCount, -1) == 1)
                control->destroy();
        }
    }

    return this;
}
