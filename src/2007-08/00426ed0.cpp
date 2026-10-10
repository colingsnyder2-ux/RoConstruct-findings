// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void deleteSelf();
};

struct Name;

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* create(CreatorResult* result);
};

extern "C" void* __cdecl sub_426BD0(void** out);

CreatorResult* Creator::create(CreatorResult* result) {
    void* tmp = 0;
    void** p = &tmp;
    void* obj = sub_426BD0(p);
    result->ptr = *(void**)obj;
    RefCounted* r = *(RefCounted**)((char*)obj + 4);
    result->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refCount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd(&old->weakCount, -1) == 1) {
                old->deleteSelf();
            }
        }
    }
    return result;
}
