// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct BoundFuncDesc {
    void construct(void* function, void* arg);
};

extern "C" void __cdecl helper_4b0af0(void* a, void* b, void* c);

void BoundFuncDesc::construct(void* function, void* arg)
{
    RefCounted* p = (RefCounted*)arg;
    void* local[2];
    local[0] = function;
    local[1] = p;
    if (p) {
        _InterlockedExchangeAdd(&p->refCount, 1);
    }
    helper_4b0af0(local, 0, 0);
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
                void** vt2 = p->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(p);
            }
        }
    }
}
