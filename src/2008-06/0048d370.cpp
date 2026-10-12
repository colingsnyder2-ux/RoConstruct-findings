// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount;
    long weakrefcount;
};

struct Holder {
    void* a;
    void* b;
    RefCounted* c;
};

typedef void (__stdcall *CopyFn)(void*, void*);
typedef void (__thiscall *VoidFn)(void*);

void __cdecl sub_48d370(Holder* out, void* first, void* last, CopyFn copy)
{
    Holder tmp;
    tmp.a = 0;
    tmp.b = 0;
    tmp.c = 0;

    void* it = first;
    while (it != last) {
        copy(&tmp, it);
        it = (char*)it + 8;
    }

    out->a = tmp.a;
    out->b = tmp.b;
    out->c = tmp.c;

    if (tmp.c) {
        _InterlockedExchangeAdd(&tmp.c->refcount, 1);
    }

    if (tmp.c) {
        if (_InterlockedExchangeAdd(&tmp.c->refcount, -1) == 1) {
            ((VoidFn)tmp.c->vptr[1])(tmp.c);
            if (_InterlockedExchangeAdd(&tmp.c->weakrefcount, -1) == 1) {
                ((VoidFn)tmp.c->vptr[2])(tmp.c);
            }
        }
    }
}
