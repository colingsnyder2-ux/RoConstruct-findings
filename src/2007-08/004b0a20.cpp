// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct SignalDesc {
    int a;
    int b;
    int c;
    int d;
    RefCounted* e;
};

struct VReplicator {
    int f0;
    int f4;
    int f8;
    void construct(SignalDesc* desc);
    void helper();
};

void VReplicator::construct(SignalDesc* desc) {
    f0 = 0;
    f4 = 0;
    f8 = 0;
    SignalDesc local;
    local.a = desc->a;
    local.b = desc->b;
    local.c = desc->c;
    local.d = desc->d;
    local.e = desc->e;
    if (local.e) {
        _InterlockedExchangeAdd(&local.e->refCount, 1);
    }
    helper();
    if (local.e) {
        if (_InterlockedExchangeAdd(&local.e->refCount, -1) == 1) {
            typedef void (__thiscall *VFn)(RefCounted*);
            VFn fn = *(VFn*)local.e->vptr;
            fn(local.e);
            if (_InterlockedExchangeAdd(&local.e->weakCount, -1) == 1) {
                VFn fn2 = *(VFn*)((char*)local.e->vptr + 4);
                fn2(local.e);
            }
        }
    }
}
