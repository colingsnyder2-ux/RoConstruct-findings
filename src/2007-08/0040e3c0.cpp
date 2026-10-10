// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* getResult(CreatorResult* out);
};

CreatorResult* Creator::getResult(CreatorResult* out) {
    CreatorResult local;
    local.ptr = 0;
    local.ref = 0;

    CreatorResult* src = 0;
    // call 0x40e330 with &local
    // The call returns a pointer to a CreatorResult-like structure
    extern CreatorResult* __cdecl sub_40e330(CreatorResult*);
    src = sub_40e330(&local);

    out->ptr = src->ptr;
    out->ref = src->ref;
    if (out->ref) {
        _InterlockedExchangeAdd(&out->ref->refCount, 1);
    }

    RefCounted* r = local.ref;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                r->destroyWeak();
            }
        }
    }

    return out;
}
