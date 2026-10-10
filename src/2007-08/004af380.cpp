// from server: 54% by colin
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

struct FactoryProductCreator {
    CreatorResult* create(CreatorResult* result);
};

extern CreatorResult* __cdecl getCreatorResult(CreatorResult* result);

CreatorResult* FactoryProductCreator::create(CreatorResult* result) {
    CreatorResult temp;
    temp.ptr = 0;
    temp.ref = 0;

    CreatorResult* src = getCreatorResult(&temp);

    result->ptr = src->ptr;
    result->ref = src->ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refCount, 1);
    }

    RefCounted* old = temp.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void (__stdcall *dtor)(RefCounted*) = *(void (__stdcall **)(RefCounted*))((char*)old->vptr + 4);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                void (__stdcall *wdtor)(RefCounted*) = *(void (__stdcall **)(RefCounted*))((char*)old->vptr + 8);
                wdtor(old);
            }
        }
    }

    return result;
}
