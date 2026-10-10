// from server: 52% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

extern "C" Holder* __cdecl sub_41C450(Holder* out);

struct S {
    Holder* f(Holder* out);
};

Holder* S::f(Holder* out) {
    Holder tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    sub_41C450(&tmp);
    out->ptr = tmp.ptr;
    out->ref = tmp.ref;
    if (out->ref) {
        _InterlockedExchangeAdd(&out->ref->refcount, 1);
    }
    RefCounted* r = tmp.ref;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            (*(void (__thiscall**)(RefCounted*))(*(void***)r)[1])(r);
            if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                (*(void (__thiscall**)(RefCounted*))(*(void***)r)[2])(r);
            }
        }
    }
    return out;
}
