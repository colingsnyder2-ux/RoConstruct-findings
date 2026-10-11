// from server: 60% by atomic.potato
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

extern Holder* __cdecl getHolder(Holder* out);

struct Result {
    Inner* a;
    Inner* b;
};

void __stdcall func(Result* out) {
    Holder h;
    h.p = 0;
    Holder* ph = getHolder(&h);
    Inner* ip = ph->p;
    if (ip) {
        ip = (Inner*)((char*)ip + 0x14);
    } else {
        ip = 0;
    }
    out->a = ip;
    Inner* b = ph->q;
    out->b = b;
    if (b) {
        _InterlockedExchangeAdd(&b->ref1, 1);
    }
    Inner* esi = h.p;
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->ref1, -1) == 1) {
            esi->v1();
            if (_InterlockedExchangeAdd(&esi->ref2, -1) == 1) {
                esi->v2();
            }
        }
    }
}
