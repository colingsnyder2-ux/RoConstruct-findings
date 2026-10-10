// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl malloc(unsigned int);

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
    virtual void destroy();
    virtual void free();
};

struct Holder {
    RefCounted* ptr;
};

struct Target {
    void construct(Holder* out, const Holder* src);
};

struct Outer {
    void assign(Holder* out, const Holder* src);
};

struct S {
    Holder* field0;
    void func(Holder* out, const Holder* src);
};

void S::func(Holder* out, const Holder* src)
{
    Holder local;
    local.ptr = 0;
    RefCounted* p = (RefCounted*)malloc(0x138);
    if (p) {
        ((Target*)p)->construct(&local, src);
    } else {
        local.ptr = 0;
    }
    ((Outer*)field0)->assign(out, &local);
    RefCounted* r = local.ptr;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                r->free();
            }
        }
    }
}
