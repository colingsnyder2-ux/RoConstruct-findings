// from server: 52% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[4];
    volatile long ref1;
    volatile long ref2;
    virtual void vf1();
    virtual void vf2();
};

struct Holder {
    Inner* p;
    Inner* q;
};

extern "C" Holder* __cdecl sub_40BFB0(Holder* out);

struct S {
    Holder* f(Holder* out);
};

Holder* S::f(Holder* out) {
    Holder tmp;
    sub_40BFB0(&tmp);
    Inner* a = tmp.p;
    if (a) {
        a = (Inner*)((char*)a + 0x14);
    } else {
        a = 0;
    }
    out->p = a;
    Inner* b = tmp.q;
    out->q = b;
    if (b) {
        _InterlockedExchangeAdd(&b->ref1, 1);
    }
    Inner* esi = tmp.p;
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->ref1, -1) == 1) {
            esi->vf1();
            if (_InterlockedExchangeAdd(&esi->ref2, -1) == 1) {
                esi->vf2();
            }
        }
    }
    return out;
}
