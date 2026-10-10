// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct FactoryProductCreator {
    void construct(void* arg0, void* arg1, void* arg2, void* arg3, RefCounted* arg4, void* arg5);
};

void __stdcall helper(void* arg0, void* arg1, void* arg2, void* arg3, RefCounted* arg4, void* arg5);

void FactoryProductCreator::construct(void* arg0, void* arg1, void* arg2, void* arg3, RefCounted* arg4, void* arg5)
{
    if (arg4) {
        _InterlockedExchangeAdd(&arg4->refCount, 1);
    }
    helper(arg0, arg1, arg2, arg3, arg4, arg5);
    if (arg4) {
        if (_InterlockedExchangeAdd(&arg4->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))arg4->vptr)(arg4);
            if (_InterlockedExchangeAdd(&arg4->weakCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)arg4->vptr)[2])(arg4);
            }
        }
    }
}
