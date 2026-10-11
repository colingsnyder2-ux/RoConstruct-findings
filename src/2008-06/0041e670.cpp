// from server: 38% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vfptr;
    long ref1;
    long ref2;
};

extern "C" void* __cdecl sub_41E550(void* out);

struct S {
    void* f(void* arg);
};

void* S::f(void* arg) {
    void* result;
    sub_41E550(&result);
    void** dst = (void**)arg;
    dst[0] = ((void**)&result)[0];
    Inner* inner = (Inner*)((void**)&result)[1];
    dst[1] = inner;
    if (inner) {
        _InterlockedExchangeAdd(&inner->ref1, 1);
    }
    Inner* old = (Inner*)((void**)&result)[0];
    if (old) {
        if (_InterlockedExchangeAdd(&old->ref1, -1) == 1) {
            void (*fn)(Inner*) = *(void(**)(Inner*))((char*)old->vfptr + 4);
            fn(old);
            if (_InterlockedExchangeAdd(&old->ref2, -1) == 1) {
                void (*fn2)(Inner*) = *(void(**)(Inner*))((char*)old->vfptr + 8);
                fn2(old);
            }
        }
    }
    return arg;
}
