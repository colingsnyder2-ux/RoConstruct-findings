// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct BoundFuncDesc {
    void callHelper(void* a, void* b);
};

void __stdcall helper0052f450(void* a, void* b);

void BoundFuncDesc::callHelper(void* a, void* b)
{
    RefCounted* rc = (RefCounted*)b;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }
    helper0052f450(a, b);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void (__stdcall *dtor)(void*) = *(void (__stdcall **)(void*))((char*)rc->vptr + 4);
            dtor(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                void (__stdcall *dtor2)(void*) = *(void (__stdcall **)(void*))((char*)rc->vptr + 8);
                dtor2(rc);
            }
        }
    }
}
