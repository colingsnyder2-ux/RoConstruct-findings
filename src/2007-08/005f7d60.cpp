// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount;
};

struct Value {
    void* ptr;
    RefCounted* ref;
};

struct FactoryProduct {
    void* ptr;
    RefCounted* ref;
};

extern "C" void* __cdecl sub_5f72c0(void* out);

struct Creator {
    FactoryProduct* __thiscall create(FactoryProduct* out);
};

FactoryProduct* __thiscall Creator::create(FactoryProduct* out) {
    Value tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    sub_5f72c0(&tmp);
    out->ptr = tmp.ptr;
    out->ref = tmp.ref;
    if (out->ref) {
        _InterlockedExchangeAdd(&out->ref->refCount, 1);
    }
    if (tmp.ref) {
        if (_InterlockedExchangeAdd(&tmp.ref->refCount, -1) == 1) {
            void** vt = tmp.ref->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(tmp.ref);
            if (_InterlockedExchangeAdd(&tmp.ref->refCount, -1) == 1) {
                void** vt2 = tmp.ref->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(tmp.ref);
            }
        }
    }
    return out;
}
