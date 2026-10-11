// from server: 46% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct Arg {
    int a, b, c, d;
};

struct S {
    int field0;
    void* init(Arg a, RefCounted* rc);
};

void* S::init(Arg a, RefCounted* rc) {
    this->field0 = 0;
    Arg local;
    local = a;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    ((void (__thiscall*)(S*, Arg*))0x8d5910)(this, &local);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))rc->vptr[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))rc->vptr[2])(rc);
            }
        }
    }

    return this;
}
