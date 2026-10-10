// from server: 42% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct FactoryResult {
    void* ptr;
    RefCounted* ref;
};

extern "C" FactoryResult* __cdecl sub_58F4F0(FactoryResult* out);

struct Creator {
    FactoryResult* create(FactoryResult* out);
};

FactoryResult* Creator::create(FactoryResult* out) {
    FactoryResult tmp;
    sub_58F4F0(&tmp);
    out->ptr = tmp.ptr;
    out->ref = tmp.ref;
    if (out->ref) {
        _InterlockedExchangeAdd(&out->ref->ref1, 1);
    }
    if (tmp.ref) {
        if (_InterlockedExchangeAdd(&tmp.ref->ref1, -1) == 1) {
            void** vt = (void**)tmp.ref->vptr;
            typedef void (__thiscall *Fn)(RefCounted*);
            ((Fn)vt[1])(tmp.ref);
            if (_InterlockedExchangeAdd(&tmp.ref->ref2, -1) == 1) {
                ((Fn)vt[2])(tmp.ref);
            }
        }
    }
    return out;
}
