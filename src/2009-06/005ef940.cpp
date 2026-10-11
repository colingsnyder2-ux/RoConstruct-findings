// from server: 58% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount;
};

struct Holder {
    RefCounted* ptr;
    RefCounted* ptr2;
};

extern "C" Holder* __cdecl sub_5EF8C0(Holder* out);

struct Creator {
    Holder* __thiscall f(Holder* out);
};

Holder* Creator::f(Holder* out) {
    Holder tmp;
    tmp.ptr = 0;
    sub_5EF8C0(&tmp);
    RefCounted* p = tmp.ptr;
    if (p) {
        p = (RefCounted*)((char*)p + 0x14);
    } else {
        p = 0;
    }
    out->ptr = p;
    RefCounted* q = tmp.ptr2;
    out->ptr2 = q;
    if (q) {
        _InterlockedExchangeAdd(&q->refcount, 1);
    }
    RefCounted* r = tmp.ptr;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            void** vt = r->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(r);
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                void** vt2 = r->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(r);
            }
        }
    }
    return out;
}
