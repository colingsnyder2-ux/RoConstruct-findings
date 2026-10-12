// from server: 66% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();

    volatile long strong;
    volatile long weak;
};

struct S {
    int field0;
    int field4;
    RefCounted* field8;

    S(int unused, int a, int b, RefCounted* volatile c);
};

S::S(int unused, int a, int b, RefCounted* volatile c)
{
    field0 = a;
    field4 = b;
    field8 = c;
    if (field8 != 0) {
        _InterlockedExchangeAdd(&field8->strong, 1);
        RefCounted* d = c;
        if (d != 0) {
            if (_InterlockedExchangeAdd(&d->strong, -1) == 0) {
                d->slot1();
                if (_InterlockedExchangeAdd(&d->weak, -1) == 0) {
                    d->slot2();
                }
            }
        }
    }
}
