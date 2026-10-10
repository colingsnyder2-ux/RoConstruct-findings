// from server: 56% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* getCreator(CreatorResult* result);
};

struct FactoryProduct {
    CreatorResult* create(CreatorResult* result);
};

CreatorResult* FactoryProduct::create(CreatorResult* result) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;

    CreatorResult* src = ((Creator*)0)->getCreator(&tmp);

    result->ptr = src->ptr;
    result->ref = src->ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refCount, 1);
    }

    RefCounted* r = tmp.ref;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void (__thiscall *dtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((*(void***)r)[1]);
            dtor(r);
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                void (__thiscall *wdtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((*(void***)r)[2]);
                wdtor(r);
            }
        }
    }

    return result;
}
