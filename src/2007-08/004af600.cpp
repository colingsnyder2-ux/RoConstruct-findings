// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* control;
};

struct Creator {
    void* vptr;
};

struct FactoryProduct {
    SharedPtr* create(SharedPtr* result);
};

extern "C" void __cdecl sub_4AF570(SharedPtr* out, SharedPtr* in);

SharedPtr* FactoryProduct::create(SharedPtr* result) {
    SharedPtr tmp;
    sub_4AF570(&tmp, 0);
    result->ptr = tmp.ptr;
    result->control = tmp.control;
    if (result->control) {
        _InterlockedExchangeAdd(&result->control->refCount, 1);
    }
    if (tmp.control) {
        if (_InterlockedExchangeAdd(&tmp.control->refCount, -1) == 1) {
            tmp.control->vptr;
            typedef void (__thiscall *Fn)(RefCounted*);
            ((Fn)((void**)(*(void***)tmp.control))[1])(tmp.control);
            if (_InterlockedExchangeAdd(&tmp.control->weakRefCount, -1) == 1) {
                ((Fn)((void**)(*(void***)tmp.control))[2])(tmp.control);
            }
        }
    }
    return result;
}
