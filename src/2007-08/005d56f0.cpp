// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void onZeroRefs();
    virtual void onZeroWeakRefs();
};

struct SpCountedImpl {
    long strong;
    long weak;
};

struct Holder {
    void release(SpCountedImpl* p);
};

extern "C" void __stdcall sub_541630(void*);

void Holder::release(SpCountedImpl* p)
{
    sub_541630(0);
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            RefCounted* r = (RefCounted*)p;
            r->onZeroRefs();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1) {
                RefCounted* r2 = (RefCounted*)p;
                r2->onZeroWeakRefs();
            }
        }
    }
}
