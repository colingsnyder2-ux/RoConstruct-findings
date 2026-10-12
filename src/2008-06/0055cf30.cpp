// from server: 63% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct S {
    int field0;
    int field4;
    RefCounted *field8;

    S *init(int a, int b, RefCounted *c, RefCounted *d);
};

S *S::init(int a, int b, RefCounted *c, RefCounted *d)
{
    field0 = a;
    field4 = b;
    field8 = c;
    if (c != 0) {
        _InterlockedExchangeAdd((volatile long *)((char *)c + 4), 1);
        if (d != 0) {
            if (_InterlockedExchangeAdd((volatile long *)((char *)d + 4), -1) == 1) {
                d->slot1();
                if (_InterlockedExchangeAdd((volatile long *)((char *)d + 8), -1) == 1) {
                    d->slot2();
                }
            }
        }
    }
    return this;
}
