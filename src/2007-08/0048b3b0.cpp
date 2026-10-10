// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct NameRef {
    void* ptr;
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

    CreatorResult* src = ((Creator*)this)->getCreator(&tmp);

    result->ptr = src->ptr;
    result->ref = src->ref;

    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refCount, 1);
    }

    RefCounted* r = tmp.ref;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void (*dtor)(RefCounted*) = *(void (**)(RefCounted*))((*(void***)r)[1]);
            dtor(r);
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                void (*wdtor)(RefCounted*) = *(void (**)(RefCounted*))((*(void***)r)[2]);
                wdtor(r);
            }
        }
    }

    return result;
}
