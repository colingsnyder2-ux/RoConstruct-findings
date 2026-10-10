// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
    long weakRefCount;
    virtual void destroy();
    virtual void deleteSelf();
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

    CreatorResult* src = 0;
    // call helper at 0x4274e0 which fills a CreatorResult
    extern CreatorResult* __cdecl helper(CreatorResult*);
    src = helper(&tmp);

    out->ptr = src->ptr;
    out->ref = src->ref;
    if (out->ref) {
        _InterlockedExchangeAdd((volatile long*)((char*)out->ref + 4), 1);
    }

    RefCounted* old = tmp.ref;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                old->deleteSelf();
            }
        }
    }

    return out;
}
