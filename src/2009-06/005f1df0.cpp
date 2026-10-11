// from server: 54% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[4];
    volatile long ref1;
    volatile long ref2;
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Holder {
    Inner* p;
    Inner* q;
};

struct Outer {
    char pad0[0x14];
};

extern "C" void* __cdecl sub_5f1d70(void** out);

struct S {
    void* f(Holder* out);
};

void* S::f(Holder* out) {
    void* tmp = 0;
    void* r = sub_5f1d70(&tmp);
    Inner* a = *(Inner**)r;
    if (a) {
        a = (Inner*)((char*)a + 0x14);
    } else {
        a = 0;
    }
    out->p = a;
    Inner* b = *(Inner**)((char*)r + 4);
    out->q = b;
    if (b) {
        _InterlockedExchangeAdd(&b->ref1, 1);
    }
    Inner* esi = *(Inner**)&tmp;
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->ref1, -1) == 1) {
            void** vt = *(void***)esi;
            void (*fn)(Inner*) = (void (*)(Inner*))vt[1];
            fn(esi);
            if (_InterlockedExchangeAdd(&esi->ref2, -1) == 1) {
                void** vt2 = *(void***)esi;
                void (*fn2)(Inner*) = (void (*)(Inner*))vt2[2];
                fn2(esi);
            }
        }
    }
    return out;
}
