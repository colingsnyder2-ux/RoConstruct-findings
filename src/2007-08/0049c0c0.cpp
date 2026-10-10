// from server: 15% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct FuncDesc {
    void* vptr;
    char pad[0x40];
};

struct BoundFuncDesc {
    FuncDesc base;
    void* function;
    void construct(void* function, void* name, int security, int attributes);
};

void FuncDesc_construct(FuncDesc* self, void* name, int security, int attributes);

void BoundFuncDesc::construct(void* function, void* name, int security, int attributes)
{
    RefCounted* rc = (RefCounted*)function;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    FuncDesc_construct(&this->base, name, security, attributes);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__stdcall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__stdcall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }
}
