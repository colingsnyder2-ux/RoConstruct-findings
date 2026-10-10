// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct FuncDescBase {
    void construct(void* args);
};

struct BoundFuncDesc {
    FuncDescBase base;
    void* function;
    BoundFuncDesc(void* fn, const char* name, int security, int attributes,
                  void* arg0, void* arg1, void* arg2, void* arg3, RefCounted* ref);
};

void FuncDescBase_construct(FuncDescBase* self, void* args);

BoundFuncDesc::BoundFuncDesc(void* fn, const char* name, int security, int attributes,
                             void* arg0, void* arg1, void* arg2, void* arg3, RefCounted* ref)
{
    void* args[5];
    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = ref;
    if (ref) {
        _InterlockedExchangeAdd(&ref->refCount, 1);
    }
    FuncDescBase_construct(&this->base, args);
    if (ref) {
        if (_InterlockedExchangeAdd(&ref->refCount, -1) == 1) {
            void** vt = (void**)ref->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(ref);
            if (_InterlockedExchangeAdd(&ref->weakCount, -1) == 1) {
                void** vt2 = (void**)ref->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(ref);
            }
        }
    }
}
