// from server: 88% by king_originala
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

struct Owner {
    void cleanup();
};

struct LocalBackpack {
    char padding[28];
    int active;
    void invoke(int, Shared);
};

void LocalBackpack::invoke(int, Shared)
{
    if (active)
        reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 380)->cleanup();
}
