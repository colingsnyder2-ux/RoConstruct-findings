// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* __thiscall create(CreatorResult* result);
};

extern "C" void* __cdecl sub_48BAA0(void* out);

CreatorResult* __thiscall Creator::create(CreatorResult* result) {
    void* tmp = 0;
    sub_48BAA0(&tmp);
    void** src = (void**)&tmp;
    result->ptr = src[0];
    RefCounted* r = (RefCounted*)src[1];
    result->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refCount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void** vt = (void**)old->vptr;
            typedef void (__thiscall *Fn)(RefCounted*);
            ((Fn)vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                ((Fn)vt[2])(old);
            }
        }
    }
    return result;
}
