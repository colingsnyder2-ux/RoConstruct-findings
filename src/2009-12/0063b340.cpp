// from server: 30% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long ref1;
    long ref2;
};

struct Inner {
    void* p;
    RefCounted* rc;
};

struct Outer {
    Inner a;
    Inner b;
};

extern "C" void* __cdecl sub_420ae0(void*);
extern "C" void __cdecl sub_63ad10(void*, void*);

struct S {
    Outer* f(Outer* dst, Outer* src);
};

Outer* S::f(Outer* dst, Outer* src) {
    Outer tmp;
    int flags = 0;
    RefCounted* keep = 0;
    if (src != 0) {
        void* p = sub_420ae0(&tmp.a);
        sub_63ad10(&tmp.b, p);
        keep = tmp.a.rc;
        flags = 3;
    } else {
        tmp.a.p = 0;
        tmp.a.rc = 0;
        flags = 4;
    }
    dst->a.p = tmp.a.p;
    dst->a.rc = tmp.a.rc;
    if (dst->a.rc != 0) {
        _InterlockedExchangeAdd(&dst->a.rc->ref1, 1);
    }
    flags |= 8;
    if (flags & 4) {
        flags &= ~4;
        if (keep != 0) {
            if (_InterlockedExchangeAdd(&keep->ref1, -1) == 1) {
                keep->vptr;
                ((void (__thiscall*)(RefCounted*))((void**)keep->vptr)[1])(keep);
                if (_InterlockedExchangeAdd(&keep->ref2, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))((void**)keep->vptr)[2])(keep);
                }
            }
        }
    }
    if (flags & 2) {
        flags &= ~2;
        RefCounted* r = tmp.b.rc;
        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)r->vptr)[1])(r);
                if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))((void**)r->vptr)[2])(r);
                }
            }
        }
    }
    if (flags & 1) {
        flags &= ~1;
        RefCounted* r = tmp.a.rc;
        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)r->vptr)[1])(r);
                if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))((void**)r->vptr)[2])(r);
                }
            }
        }
    }
    return dst;
}
