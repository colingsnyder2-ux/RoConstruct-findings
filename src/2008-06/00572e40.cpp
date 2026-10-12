// from server: 68% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    Control* p = control;
    if (p)
        _InterlockedExchangeAdd(&p->strong, 1);
}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

extern Shared __cdecl fallback(void* argument);

struct S {
    Shared lookup(void* argument);
    Shared f(void* argument);
};

Shared S::f(void* argument) {
    Shared temporary = lookup(argument);
    if (temporary.object)
        return temporary;
    return fallback(argument);
}
