// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct FuncDesc {
    void* vptr;
    void* field4;
    void* field8;
};

extern "C" void __cdecl helper_49ae60(void* a, void* b, void* c, void* d);

struct BoundFuncDesc {
    void construct(FuncDesc* desc, RefCounted* rc);
};

void BoundFuncDesc::construct(FuncDesc* desc, RefCounted* rc)
{
    void* local[2];
    local[0] = desc;
    local[1] = rc;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }
    helper_49ae60(0, local, 0, 0);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }
}
