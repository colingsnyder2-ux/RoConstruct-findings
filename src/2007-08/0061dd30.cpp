// from server: 75% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct ScoreHud {
    void func(int a, int b, RefCounted* p);
};

void ScoreHud::func(int a, int b, RefCounted* p)
{
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 0) {
            p->unknown1();
        }
        if (_InterlockedExchangeAdd(&p->refCount2, -1) == 0) {
            p->unknown2();
        }
    }
}
