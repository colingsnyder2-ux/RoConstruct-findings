// from server: 56% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakcount;
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

CreatorResult* Creator::getCreator(CreatorResult* result) {
    CreatorResult local;
    local.ptr = 0;
    local.ref = 0;

    CreatorResult* src = &local;
    // call 0x48c4a0 with &local
    extern CreatorResult* __cdecl sub_48C4A0(CreatorResult*);
    CreatorResult* r = sub_48C4A0(&local);

    result->ptr = r->ptr;
    result->ref = r->ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refcount, 1);
    }

    RefCounted* old = local.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void (__thiscall *dtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((*(void***)old)[1]);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                void (__thiscall *del)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((*(void***)old)[2]);
                del(old);
            }
        }
    }

    return result;
}
