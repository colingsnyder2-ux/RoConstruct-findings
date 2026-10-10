// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Inner {
    int a;
    int b;
    int c;
    int d;
};

struct Outer {
    int x;
    RefCounted* ptr;
    Inner inner;
};

struct S {
    int f(int, int, int, int);
};

int S::f(int a, int b, int c, int d)
{
    Outer outer;
    int local = 0;
    outer.x = 0;
    outer.ptr = 0;

    // 0x417860
    extern void __stdcall sub_417860(void*, int);
    sub_417860(&outer.inner, a);

    // 0x40cc20
    extern void __stdcall sub_40cc20(void*, int, int);
    sub_40cc20(&outer.inner, a, a);

    // 0x5f83f0
    extern void __stdcall sub_5f83f0(void*, void*);
    sub_5f83f0(&outer, &local);

    // 0x5f2370
    extern void __stdcall sub_5f2370(void*, void*, int, int);
    sub_5f2370((char*)&outer + 0x10, &outer, b, d);

    // 0x571330
    extern void __stdcall sub_571330(void*);
    sub_571330(&outer);

    RefCounted* p = outer.ptr;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->destroy();
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            p->destroyWeak();
        }
    }

    return b;
}
