// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct RefCounted
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();

    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void RefCounted::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1)
    {
        slot1();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            slot2();
    }
}

struct Sub
{
    void destroy();
};

struct S
{
    virtual void v0();
    virtual void v1();
    virtual void v2();

    RefCounted* ref;
    Sub sub;
    void* extra;

    void f();
};

void S::f()
{
    ref = 0;
    if (extra)
        sub.destroy();
    sub.~Sub();
    if (ref)
        ref->release();
}
