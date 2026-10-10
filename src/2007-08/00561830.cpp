// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* control;
};

struct Creator {
    SharedPtr* create(SharedPtr* result);
};

struct FactoryProduct {
    SharedPtr* getShared(SharedPtr* result);
};

extern "C" SharedPtr* __cdecl sub_5617B0(SharedPtr* result);

SharedPtr* Creator::create(SharedPtr* result) {
    SharedPtr tmp;
    sub_5617B0(&tmp);
    result->ptr = tmp.ptr;
    result->control = tmp.control;
    if (result->control) {
        _InterlockedExchangeAdd(&result->control->refCount, 1);
    }
    if (tmp.control) {
        if (_InterlockedExchangeAdd(&tmp.control->refCount, -1) == 1) {
            void** vtbl = *(void***)tmp.control;
            ((void (__thiscall*)(RefCounted*))vtbl[1])(tmp.control);
            if (_InterlockedExchangeAdd(&tmp.control->refCount, -1) == 1) {
                void** vtbl2 = *(void***)tmp.control;
                ((void (__thiscall*)(RefCounted*))vtbl2[2])(tmp.control);
            }
        }
    }
    return result;
}
