// from server: 35% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount1;
    long refcount2;
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

extern "C" Holder* __cdecl sub_432CF0(Holder* out);

struct VAccoutrementFactoryProductCreator {
    Holder* __thiscall Create(Holder* out);
};

Holder* VAccoutrementFactoryProductCreator::Create(Holder* out) {
    Holder tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    sub_432CF0(&tmp);
    out->ptr = tmp.ptr;
    out->ref = tmp.ref;
    if (out->ref != 0) {
        _InterlockedExchangeAdd(&out->ref->refcount1, 1);
    }
    if (tmp.ref != 0) {
        if (_InterlockedExchangeAdd(&tmp.ref->refcount1, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))tmp.ref->vptr[1])(tmp.ref);
            if (_InterlockedExchangeAdd(&tmp.ref->refcount2, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))tmp.ref->vptr[2])(tmp.ref);
            }
        }
    }
    return out;
}
