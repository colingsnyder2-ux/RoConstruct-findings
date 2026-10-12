// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern unsigned char instanceType[];
extern unsigned char serviceType[];

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Result {
    void finish();
};

struct History {
    Result* process(Shared);
};

struct S {
    unsigned char padding[0x134];
    History* history;
    unsigned char padding2[0x2c];
    bool blocked;

    void f(Shared);
};

void S::f(Shared value)
{
    if (blocked)
        return;

    if (value.object == this)
        return;

    if (!__RTDynamicCast(value.object, 0, instanceType, serviceType, 0)
        && history)
        history->process(value)->finish();
}
