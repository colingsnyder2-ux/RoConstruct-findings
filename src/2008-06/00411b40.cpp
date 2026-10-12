// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Second {
    void* value;
    Second();
    ~Second();
};

__forceinline Second::Second() : value(0)
{
}

struct S {
    void* first;
    Second second;
    void* third;

    S(Shared argument);
    void assign(void* object);
};

S::S(Shared argument) : first(0), third(0)
{
    assign(argument.object);
}
