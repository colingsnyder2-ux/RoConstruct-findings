// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Creator {
    void* vptr;
    void registerCreator(int a, int b, int c, RefCounted* p);
};

void Creator::registerCreator(int a, int b, int c, RefCounted* p)
{
    if (p) {
        _InterlockedExchangeAdd(&p->refCount, 1);
    }
    // call 0x48a640
    extern void __cdecl helper(int, int, int, RefCounted*);
    helper(a, b, c, p);
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->vptr;
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[1])(p);
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[2])(p);
            }
        }
    }
}
