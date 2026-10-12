// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared {
    void *object;
    Control *control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control *p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Callable {
    void (__thiscall *function)(void *);
    char *object;
    int adjustment;
};

void __cdecl invoke(const Callable *callable, Shared owner)
{
    callable->function(callable->object + callable->adjustment);
}
