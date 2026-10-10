// from server: 49% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Inner {
    void* vptr;
    long refcount;
};

struct Holder {
    void* ptr;
    Inner* inner;
};

extern "C" void __cdecl sub_5f7140(Holder* out, void* arg);

struct S {
    Holder* f(void* arg);
};

Holder* S::f(void* arg) {
    Holder* result = (Holder*)arg;
    Holder tmp;
    sub_5f7140(&tmp, arg);
    result->ptr = tmp.ptr;
    result->inner = tmp.inner;
    if (result->inner != 0) {
        _InterlockedExchangeAdd(&result->inner->refcount, 1);
    }
    Inner* old = tmp.inner;
    if (old != 0) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = (void**)old->vptr;
            ((void (__stdcall*)(Inner*))vt[1])(old);
            if (_InterlockedExchangeAdd(&((long*)old)[2], -1) == 1) {
                void** vt2 = (void**)old->vptr;
                ((void (__stdcall*)(Inner*))vt2[2])(old);
            }
        }
    }
    return result;
}
