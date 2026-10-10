// from server: 46% by colin
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

extern "C" SharedPtr* __cdecl sub_407620(SharedPtr* result);

SharedPtr* Creator::create(SharedPtr* result) {
    SharedPtr tmp;
    sub_407620(&tmp);
    result->ptr = tmp.ptr;
    result->control = tmp.control;
    if (result->control) {
        _InterlockedExchangeAdd(&result->control->refCount, 1);
    }
    if (tmp.control) {
        if (_InterlockedExchangeAdd(&tmp.control->refCount, -1) == 1) {
            void** vt = (void**)tmp.control->vptr;
            ((void (__stdcall*)(RefCounted*))vt[1])(tmp.control);
            if (_InterlockedExchangeAdd(&((volatile long*)tmp.control)[2], -1) == 1) {
                void** vt2 = (void**)tmp.control->vptr;
                ((void (__stdcall*)(RefCounted*))vt2[2])(tmp.control);
            }
        }
    }
    return result;
}
