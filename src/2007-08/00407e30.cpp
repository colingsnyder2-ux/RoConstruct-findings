// from server: 56% by colin
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

extern "C" void* __cdecl sub_407DA0(void** out);

CreatorResult* Creator::create(CreatorResult* result) {
    void* tmp = 0;
    void* obj = sub_407DA0(&tmp);
    result->ptr = *(void**)obj;
    RefCounted* rc = *(RefCounted**)((char*)obj + 4);
    result->ref = rc;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }
    RefCounted* lrc = (RefCounted*)tmp;
    if (lrc) {
        if (_InterlockedExchangeAdd(&lrc->refCount, -1) == 1) {
            void** vt = *(void***)lrc;
            void (__thiscall *fn)(RefCounted*) = (void (__thiscall*)(RefCounted*))vt[1];
            fn(lrc);
            if (_InterlockedExchangeAdd(&lrc->weakCount, -1) == 1) {
                void** vt2 = *(void***)lrc;
                void (__thiscall *fn2)(RefCounted*) = (void (__thiscall*)(RefCounted*))vt2[2];
                fn2(lrc);
            }
        }
    }
    return result;
}
