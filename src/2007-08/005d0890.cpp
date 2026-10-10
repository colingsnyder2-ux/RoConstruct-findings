// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void onZeroRefCount();
    virtual void onFinalRelease();
    volatile long refCount;
    volatile long weakRefCount;
};

struct LocalBackpack {
    char pad[0x1c];
    int field_1c;
    void destroy();
    void func_005d0890(RefCounted* p, int, int);
};

void LocalBackpack::func_005d0890(RefCounted* p, int, int)
{
    if (field_1c != 0) {
        LocalBackpack* self = (LocalBackpack*)((char*)this - 0x134);
        self->destroy();
    }
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->onZeroRefCount();
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            p->onFinalRelease();
        }
    }
}
