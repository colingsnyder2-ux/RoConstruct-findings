// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* getCreator(CreatorResult* result);
};

CreatorResult* Creator::getCreator(CreatorResult* result) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;

    CreatorResult* src = &tmp;
    CreatorResult* out = 0;
    // call 0x48aff0 with &tmp
    extern CreatorResult* __stdcall sub_48aff0(CreatorResult*);
    CreatorResult* r = sub_48aff0(&tmp);

    result->ptr = r->ptr;
    result->ref = r->ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refcount, 1);
    }

    RefCounted* old = tmp.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void (__thiscall *dtor)(RefCounted*) = *(void (__thiscall**)(RefCounted*))((*(void***)old)[1]);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakrefcount, -1) == 1) {
                void (__thiscall *wdtor)(RefCounted*) = *(void (__thiscall**)(RefCounted*))((*(void***)old)[2]);
                wdtor(old);
            }
        }
    }

    return result;
}
