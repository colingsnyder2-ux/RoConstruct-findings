// from server: 79% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void **vptr;
    long refcount;
    long weakcount;
};

struct Holder {
    void *ptr;
    RefCounted *ref;
    void *extra;
    Holder(void *p, RefCounted *r, void *e);
};

Holder::Holder(void *p, RefCounted *r, void *e)
{
    ptr = p;
    ref = r;
    if (r != 0) {
        _InterlockedExchangeAdd(&r->refcount, 1);
    }
    extra = e;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            void **vtbl = (void **)r->vptr;
            void (__thiscall *fn)(RefCounted *) = (void (__thiscall *)(RefCounted *))vtbl[1];
            fn(r);
            if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                void **vtbl2 = (void **)r->vptr;
                void (__thiscall *fn2)(RefCounted *) = (void (__thiscall *)(RefCounted *))vtbl2[2];
                fn2(r);
            }
        }
    }
}
