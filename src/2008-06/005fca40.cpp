// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount;
    volatile long weakRefCount;
};

struct LocalBackpack {
    char pad[0x178];
    void sub_5fc730(int);
    void func(int, int, RefCounted*);
};

void LocalBackpack::func(int a, int b, RefCounted* p)
{
    sub_5fc730(a);
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->unknown1();
            if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
                p->unknown2();
            }
        }
    }
}
