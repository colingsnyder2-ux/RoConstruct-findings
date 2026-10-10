// from server: 34% by colin
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
    CreatorResult* getCreator(CreatorResult* result);
};

CreatorResult* __stdcall makeCreator(CreatorResult* result);

CreatorResult* Creator::getCreator(CreatorResult* result) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    makeCreator(&tmp);
    result->ptr = tmp.ptr;
    result->ref = tmp.ref;
    if (tmp.ref) {
        _InterlockedExchangeAdd(&tmp.ref->refCount, 1);
    }
    if (tmp.ref) {
        if (_InterlockedExchangeAdd(&tmp.ref->refCount, -1) == 1) {
            void (__stdcall *dtor)(RefCounted*) = *(void (__stdcall **)(RefCounted*))((char*)tmp.ref->vptr + 4);
            dtor(tmp.ref);
            if (_InterlockedExchangeAdd(&tmp.ref->weakCount, -1) == 1) {
                void (__stdcall *wdtor)(RefCounted*) = *(void (__stdcall **)(RefCounted*))((char*)tmp.ref->vptr + 8);
                wdtor(tmp.ref);
            }
        }
    }
    return result;
}
