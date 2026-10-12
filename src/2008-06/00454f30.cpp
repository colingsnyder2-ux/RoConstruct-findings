// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct State
{
    bool query();
};

struct Object
{
    State* state();
};

struct SharedSource
{
    Object* pointer;
    Control* control;
    ~SharedSource();
};

struct Shared
{
    Object* pointer;
    Control* control;
    Shared(const SharedSource& other);
    ~Shared();
};

Shared::Shared(const SharedSource& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

SharedSource::~SharedSource()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Shared::~Shared()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Provider
{
    SharedSource get();
};

struct Guard
{
    unsigned long storage[3];
    Guard(Shared value);
    ~Guard();
};

struct Output
{
    virtual void set(int value) = 0;
};

struct S
{
    unsigned char padding[0x94];
    Provider* provider;
    Shared get();
    void f(Output* output);
};

void S::f(Output* output)
{
    Guard guard(provider->get());
    output->set(get().pointer->state()->query() != 0);
}
