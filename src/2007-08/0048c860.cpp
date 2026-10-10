// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* create(CreatorResult* result);
};

extern "C" CreatorResult* __cdecl sub_48C7D0(CreatorResult* result);

CreatorResult* Creator::create(CreatorResult* result) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;

    CreatorResult* src = sub_48C7D0(&tmp);

    result->ptr = src->ptr;
    result->ref = src->ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refcount, 1);
    }

    RefCounted* old = tmp.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = (void**)old->vptr;
            typedef void (__thiscall *Fn)(RefCounted*);
            ((Fn)vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakrefcount, -1) == 1) {
                ((Fn)vt[2])(old);
            }
        }
    }

    return result;
}
