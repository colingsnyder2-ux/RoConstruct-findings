// from server: 69% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Holder {
    void* ptr;
    Holder(void* p);
    ~Holder();
};

extern "C" void __cdecl sub_541630(void*);

struct S {
    void f(void* a, RefCounted* b);
};

void S::f(void* a, RefCounted* b)
{
    Holder h(a);
    if (b) {
        if (_InterlockedExchangeAdd(&b->refcount, -1) == 1) {
            b->destroy();
            if (_InterlockedExchangeAdd(&b->weakrefcount, -1) == 1) {
                b->destroyWeak();
            }
        }
    }
}
