// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct SrcPtr {
    void* ptr;
    RefCounted* ref;
};

struct DstPtr {
    void* ptr;
    RefCounted* ref;
};

extern "C" void __cdecl helper_48c220(SrcPtr* out, SrcPtr* in);

struct FactoryProductCreator {
    DstPtr* create(DstPtr* result);
};

DstPtr* FactoryProductCreator::create(DstPtr* result) {
    SrcPtr src;
    src.ptr = 0;
    src.ref = 0;
    helper_48c220(&src, &src);

    result->ptr = src.ptr;
    result->ref = src.ref;
    if (result->ref) {
        _InterlockedExchangeAdd(&result->ref->refCount, 1);
    }

    RefCounted* r = src.ref;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void** vt = *(void***)r;
            void (*dtor)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            dtor(r);
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                void** vt2 = *(void***)r;
                void (*dtor2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                dtor2(r);
            }
        }
    }

    return result;
}
