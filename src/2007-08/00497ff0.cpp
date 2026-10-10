// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void G1_func_00496940();

struct RefCountedBase {
    long refCount;
    long weakRefCount;
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct Plugin {
    void func_00497ff0(int a, int b);
};

void Plugin::func_00497ff0(int a, int b)
{
    RefCountedBase* p = (RefCountedBase*)b;
    if (p) {
        _InterlockedExchangeAdd(&p->refCount, 1);
    }
    G1_func_00496940();
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->unknown1();
            if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
                p->unknown2();
            }
        }
    }
}
