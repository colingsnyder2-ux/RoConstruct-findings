// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Argument {
    unsigned long first;
    unsigned long second;
    unsigned long third;
    Control* control;
    unsigned long fifth;
};

struct S {
    void* value;
    S(Argument argument);
    void assign(Argument* argument);
};

S::S(Argument argument)
{
    value = 0;
    assign(&argument);

    Control* control = argument.control;
    if (control && _InterlockedDecrement(&control->strong) == 0) {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}
