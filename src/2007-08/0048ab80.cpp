// from server: 54% by colin
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

struct FactoryProductCreator {
    CreatorResult* __thiscall create(CreatorResult* result);
};

extern CreatorResult* __cdecl getCreatorResult(CreatorResult* result);

CreatorResult* __thiscall FactoryProductCreator::create(CreatorResult* result)
{
    CreatorResult local;
    local.ptr = 0;
    local.ref = 0;
    getCreatorResult(&local);

    result->ptr = local.ptr;
    result->ref = local.ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refCount, 1);
    }

    RefCounted* old = local.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void (__thiscall *dtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((char*)old->vptr + 4);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                void (__thiscall *wdtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((char*)old->vptr + 8);
                wdtor(old);
            }
        }
    }

    return result;
}
