// from server: 90% by king_originala
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
    void* value;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : value(other.value), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct VirtualBase {};

struct Base : virtual VirtualBase {};

struct Padding
{
    char bytes[0x150];
};

struct Receiver : Padding, Base {};

struct S
{
    void (Receiver::*setter)(Shared);
    void f(Receiver*, Shared);
};

void S::f(Receiver* object, Shared value)
{
    (object->*setter)(value);
}
