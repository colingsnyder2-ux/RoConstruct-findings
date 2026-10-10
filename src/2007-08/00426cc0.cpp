// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
    long weakRefCount;
    virtual void destroy();
    virtual void deleteSelf();
};

struct Name;

struct Creator {
    void* vptr;
    void* ptr;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

extern "C" void* __cdecl sub_426A20(void** out);

struct FactoryProductCreator {
    CreatorResult* __thiscall construct(CreatorResult* result);
};

CreatorResult* __thiscall FactoryProductCreator::construct(CreatorResult* result) {
    void* tmp = 0;
    void** p = &tmp;
    void* v = sub_426A20(p);
    result->ptr = *(void**)v;
    RefCounted* r = *(RefCounted**)((char*)v + 4);
    result->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refCount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                old->deleteSelf();
            }
        }
    }
    return result;
}
