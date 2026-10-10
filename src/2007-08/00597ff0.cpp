// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
    virtual void destroy();
    virtual void freeWeak();
};

struct WeakPtrHolder {
    RefCounted* ptr;
};

struct Inner {
    char pad[0x20];
    WeakPtrHolder* getWeak();
};

struct Outer {
    char pad[0x24];
    Inner* inner;
    RefCounted* get();
};

RefCounted* Outer::get() {
    RefCounted* result = 0;
    Inner* in = inner;
    if (in != 0 && in->getWeak() != 0) {
        WeakPtrHolder* w = in->getWeak();
        result = w->ptr;
    }
    if (result != 0) {
        if (_InterlockedExchangeAdd(&result->refCount, -1) == 1) {
            result->destroy();
            if (_InterlockedExchangeAdd(&result->weakRefCount, -1) == 1) {
                result->freeWeak();
            }
        }
    }
    return result;
}
