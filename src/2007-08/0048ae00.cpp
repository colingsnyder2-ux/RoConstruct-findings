// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void deleteSelf();
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* create(CreatorResult* result);
};

extern CreatorResult* __cdecl getCreatorResult(CreatorResult* result);

CreatorResult* Creator::create(CreatorResult* result) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;

    CreatorResult* src = getCreatorResult(&tmp);

    result->ptr = src->ptr;
    result->ref = src->ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refCount, 1);
    }

    RefCounted* r = tmp.ref;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                r->deleteSelf();
            }
        }
    }

    return result;
}
