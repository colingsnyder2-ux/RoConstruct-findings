// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount;
    long weakcount;
};

struct SharedPtr {
    void* px;
    RefCounted* pn;
};

struct Creator {
    SharedPtr* create(SharedPtr* result);
};

extern "C" void* __cdecl sub_4AEB70(void* out);

SharedPtr* Creator::create(SharedPtr* result) {
    SharedPtr tmp;
    tmp.px = 0;
    tmp.pn = 0;
    sub_4AEB70(&tmp);
    result->px = tmp.px;
    result->pn = tmp.pn;
    if (tmp.pn) {
        _InterlockedExchangeAdd(&tmp.pn->refcount, 1);
    }
    if (tmp.pn) {
        if (_InterlockedExchangeAdd(&tmp.pn->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))tmp.pn->vptr[1])(tmp.pn);
            if (_InterlockedExchangeAdd(&tmp.pn->weakcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))tmp.pn->vptr[2])(tmp.pn);
            }
        }
    }
    return result;
}
