// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refcount;
    long weakrefcount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

struct CreatorBase {
    virtual Holder* create(Holder* result);
};

struct Creator : CreatorBase {
    Holder* create(Holder* result);
};

extern "C" void* __cdecl sub_41AD10(void** out);

Holder* Creator::create(Holder* result) {
    void* tmp = 0;
    void** p = (void**)sub_41AD10(&tmp);
    result->ptr = *p;
    RefCounted* r = (RefCounted*)p[1];
    result->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refcount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd(&old->weakrefcount, -1) == 1) {
                old->destroyWeak();
            }
        }
    }
    return result;
}
