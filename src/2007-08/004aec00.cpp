// from server: 50% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct Inner {
    void* vptr;
    RefCounted* ptr;
};

struct Holder {
    void* vptr;
    RefCounted* ptr;
};

extern "C" void __cdecl sub_4aeb70(Inner* out);

struct Factory {
    Holder* create(Holder* result);
};

Holder* Factory::create(Holder* result) {
    Inner inner;
    inner.vptr = 0;
    sub_4aeb70(&inner);

    result->vptr = inner.vptr;
    result->ptr = inner.ptr;
    if (result->ptr) {
        _InterlockedExchangeAdd(&result->ptr->refcount, 1);
    }

    RefCounted* old = inner.ptr;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void (*dtor)(RefCounted*) = *(void (**)(RefCounted*))((char*)old->vptr + 4);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakrefcount, -1) == 1) {
                void (*dtor2)(RefCounted*) = *(void (**)(RefCounted*))((char*)old->vptr + 8);
                dtor2(old);
            }
        }
    }

    return result;
}
