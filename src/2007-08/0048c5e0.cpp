// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* create(CreatorResult* out);
};

extern "C" void* __cdecl sub_488E10(void** out);

CreatorResult* Creator::create(CreatorResult* out) {
    void* tmp = 0;
    void** p = &tmp;
    sub_488E10(p);
    void* obj = tmp;
    out->ptr = *(void**)obj;
    RefCounted* rc = *(RefCounted**)((char*)obj + 4);
    out->ref = rc;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(RefCounted*))vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakCount, -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(RefCounted*))vt2[2])(old);
            }
        }
    }
    return out;
}
