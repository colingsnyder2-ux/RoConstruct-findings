// from server: 58% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* construct(CreatorResult* out);
};

extern "C" void* __cdecl sub_4508E0(void* out);

CreatorResult* Creator::construct(CreatorResult* out) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    void* r = sub_4508E0(&tmp);
    out->ptr = *(void**)r;
    RefCounted* ref = *(RefCounted**)((char*)r + 4);
    out->ref = ref;
    if (ref) {
        _InterlockedExchangeAdd(&ref->refcount, 1);
    }
    RefCounted* old = tmp.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(RefCounted*))vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(RefCounted*))vt2[2])(old);
            }
        }
    }
    return out;
}
