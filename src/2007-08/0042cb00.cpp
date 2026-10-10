// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refs;
    volatile long weakRefs;
};

struct Binder {
    void construct(int a, int b, int c, RefCounted* p);
};

void Binder::construct(int a, int b, int c, RefCounted* p)
{
    int local = 0;
    if (p) {
        _InterlockedExchangeAdd(&p->refs, 1);
    }
    extern void __stdcall helper(int, int, int, int, RefCounted*);
    helper(local, a, b, c, p);
    if (p) {
        if (_InterlockedExchangeAdd(&p->refs, -1) == 1) {
            p->unknown0();
            if (_InterlockedExchangeAdd(&p->weakRefs, -1) == 1) {
                p->unknown2();
            }
        }
    }
}
