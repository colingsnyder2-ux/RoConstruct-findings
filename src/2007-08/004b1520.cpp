// from server: 13% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
    volatile long weakRefs;
};

struct FuncDesc {
    char pad0[0x28];
    int (__thiscall *fn)(void*, void*);
    void* ctx;
    void invoke(void* out, void* arg);
};

void FuncDesc::invoke(void* out, void* arg)
{
    void* tmp;
    RefCounted* rc;
    int r = fn(ctx, arg);
    tmp = 0;
    *(void**)out = (void*)0x56d6f0;
    rc = (RefCounted*)0;
    (void)r;
}
