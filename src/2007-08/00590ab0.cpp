// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* getResult(CreatorResult* out);
};

CreatorResult* Creator::getResult(CreatorResult* out) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    CreatorResult* r = &tmp;
    // call helper at 0x590a30 which fills tmp
    // (declared as a member-like call through a function pointer)
    extern CreatorResult* __stdcall helper(CreatorResult*);
    helper(&tmp);
    out->ptr = tmp.ptr;
    out->ref = tmp.ref;
    if (out->ref) {
        _InterlockedExchangeAdd(&out->ref->refCount, 1);
    }
    RefCounted* old = tmp.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->vptr; // virtual call
            typedef void (__stdcall *Dtor)(RefCounted*);
            ((Dtor)(*(void***)old)[1])(old);
            if (_InterlockedExchangeAdd(&old->weakCount, -1) == 1) {
                ((Dtor)(*(void***)old)[2])(old);
            }
        }
    }
    return out;
}
