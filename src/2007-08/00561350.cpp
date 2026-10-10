// from server: 57% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Holder {
    void* ptr;
    Inner* inner;
};

struct Creator {
    Holder* create(Holder* out);
};

extern "C" void* __cdecl sub_5612D0(void* out);

Holder* Creator::create(Holder* out) {
    void* tmp[3];
    tmp[0] = 0;
    sub_5612D0(&tmp[0]);
    out->ptr = *(void**)&tmp[0];
    Inner* inner = *(Inner**)&tmp[1];
    out->inner = inner;
    if (inner) {
        _InterlockedExchangeAdd(&inner->refcount, 1);
    }
    Inner* old = *(Inner**)&tmp[1];
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(Inner*))vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(Inner*))vt2[2])(old);
            }
        }
    }
    return out;
}
