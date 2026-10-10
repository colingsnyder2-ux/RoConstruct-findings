// from server: 51% by colin
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
    CreatorResult* create(CreatorResult* result);
};

extern "C" void* __cdecl sub_488D80(void** out);

CreatorResult* Creator::create(CreatorResult* result) {
    void* tmp = 0;
    void* obj = sub_488D80(&tmp);
    result->ptr = *(void**)obj;
    RefCounted* r = *(RefCounted**)((char*)obj + 4);
    result->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refCount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void (*dtor)(RefCounted*) = *(void (**)(RefCounted*))((char*)*(void**)old + 4);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakCount, -1) == 1) {
                void (*dtor2)(RefCounted*) = *(void (**)(RefCounted*))((char*)*(void**)old + 8);
                dtor2(old);
            }
        }
    }
    return result;
}
