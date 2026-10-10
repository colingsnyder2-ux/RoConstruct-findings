// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Inner {
    int pad0;
    int pad4;
    int pad8;
    int padc;
};

struct Outer {
    int pad0;
    int pad4;
    int pad8;
    int padc;
    Inner inner;
};

struct S {
    int f(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_417860(int);
extern "C" void __cdecl sub_40CC20(int, int, int);
extern "C" void __cdecl sub_5F84A0(int);
extern "C" void __cdecl sub_5F2610(int, int, int);
extern "C" void __cdecl sub_571330(int);

int S::f(int a, int b, int c, int d)
{
    int local0 = 0;
    int local4 = 0;
    int local8 = 0;
    int localc = 0;
    int local10 = 0;
    int local14 = 0;
    int local18 = 0;
    int local1c = 0;
    int local20 = 0;
    int local24 = 0;
    int local28 = 0;
    int local2c = 0;
    int local30 = 0;
    int local34 = 0;
    int local38 = 0;
    int local3c = 0;

    local0 = 0;
    local4 = a;
    sub_417860(a);
    sub_40CC20(a, a, (int)&local4);
    local34 = 1;
    sub_5F84A0((int)&local8);
    local38 = 2;
    sub_5F2610((int)&local4, b, d);
    local8 = 1;
    local30 = 1;
    sub_571330((int)&local4);
    local30 = 0;

    RefCounted* p = (RefCounted*)local0;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            fn(p);
            if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
                void** vt2 = p->vptr;
                void (*fn2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                fn2(p);
            }
        }
    }

    return b;
}
