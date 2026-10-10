// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct ClearBackpack {
    void** vptr;
    char pad[0x14];
    RefCounted* ptr18;
    void clear();
};

void sub_564BB0(void*);

void ClearBackpack::clear()
{
    this->vptr = (void**)0x7a91cc;
    RefCounted* p = this->ptr18;
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
    sub_564BB0(this);
}
