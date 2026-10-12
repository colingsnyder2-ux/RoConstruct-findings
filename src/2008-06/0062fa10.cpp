// from server: 96% by king_originala
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

struct Object
{
    char padding[0x2C8];
    void* value;
};

struct Shared
{
    Object* object;
    Control* control;

    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Weak
{
    Shared lock();
};

struct S
{
    char padding[0x10];
    Weak parent;

    void* f(int argument);
};

void* S::f(int argument)
{
    if (!argument && parent.lock().object)
        return parent.lock().object->value;
    return 0;
}
