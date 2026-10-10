// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct ReplicatorStatsItem {
    char pad[0x128];
    RefCounted* ptr;
    void destroy();
};

extern void __cdecl sub_4588e0(void*);

void ReplicatorStatsItem::destroy()
{
    RefCounted* p = this->ptr;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                void** vt2 = p->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(p);
            }
        }
    }
    sub_4588e0(this);
}
