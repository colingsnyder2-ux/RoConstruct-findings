// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Creator {
    void* vptr;
};

struct FactoryProduct {
    Creator* creator;
};

struct CreatorHolder {
    void* vptr;
    long refcount;
    long weakcount;
};

extern "C" void* __cdecl sub_40E0B0(void** out);

struct S {
    FactoryProduct* __stdcall f(FactoryProduct* result);
};

FactoryProduct* __stdcall S::f(FactoryProduct* result) {
    void* tmp = 0;
    void* p = sub_40E0B0(&tmp);
    result->creator = *(Creator**)p;
    CreatorHolder* h = *(CreatorHolder**)((char*)p + 4);
    if (h) {
        _InterlockedExchangeAdd(&h->refcount, 1);
    }
    CreatorHolder* old = (CreatorHolder*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = *(void***)old;
            void (*fn)(CreatorHolder*) = (void (*)(CreatorHolder*))vt[1];
            fn(old);
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                void** vt2 = *(void***)old;
                void (*fn2)(CreatorHolder*) = (void (*)(CreatorHolder*))vt2[2];
                fn2(old);
            }
        }
    }
    return result;
}
