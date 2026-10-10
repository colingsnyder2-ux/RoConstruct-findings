// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[4];
    volatile long ref1;
    volatile long ref2;
    void (__thiscall *dtor1)(Inner*);
    void (__thiscall *dtor2)(Inner*);
};

struct S {
    char pad0[8];
    Inner* inner;
    char pad1[4];
    int f(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_417860(void*, int);
extern "C" void __cdecl sub_40CC20(void*, int, int);
extern "C" void __cdecl sub_5F8340(void*, void*);
extern "C" void __cdecl sub_5F1FD0(void*, void*, int, int);
extern "C" void __cdecl sub_571330(void*);

int S::f(int a, int b, int c, int d)
{
    char buf[8];
    int local1 = 0;
    Inner* saved;
    int local2;

    sub_417860(buf, a);
    sub_40CC20(buf, a, a);
    sub_5F8340(buf, &local2);
    sub_5F1FD0((char*)this + 0x10, buf, c, d);
    sub_571330(buf);

    saved = this->inner;
    if (saved) {
        if (_InterlockedExchangeAdd(&saved->ref1, -1) == 1) {
            saved->dtor1(saved);
            if (_InterlockedExchangeAdd(&saved->ref2, -1) == 1) {
                saved->dtor2(saved);
            }
        }
    }
    return c;
}
