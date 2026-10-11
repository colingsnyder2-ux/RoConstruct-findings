// from server: 76% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl func_718a38(unsigned int);

struct Inner {
    char pad[4];
    volatile long refcount;
};

struct Outer {
    void* vptr;
    Inner* inner;
};

struct S {
    char pad0[4];
    Inner* inner;
    void* f();
};

void* S::f()
{
    Outer* p = (Outer*)func_718a38(0xc);
    if (p != 0)
    {
        p->vptr = (void*)0x8c5178;
        p->inner = this->inner;
        Inner* in = this->inner;
        if (in != 0)
            _InterlockedExchangeAdd(&in->refcount, 1);
    }
    return p;
}
