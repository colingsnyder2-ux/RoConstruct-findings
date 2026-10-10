// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void (__thiscall **vptr)(void);
    long refCount;
    long weakCount;
};

struct LocalBackpackItem {
    char pad0[0x104];
    RefCounted* field_104;
    char field_108[0x10];
    void destroy();
    void sub_0059cba0();
};

void LocalBackpackItem::destroy()
{
    sub_0059cba0();
    RefCounted* p = field_104;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->vptr[1]();
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                p->vptr[2]();
            }
        }
    }
}
