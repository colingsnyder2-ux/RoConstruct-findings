// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall func_0056ce80();

struct Inner {
    void (__thiscall **vptr)(Inner*);
    long ref1;
    long ref2;
};

struct Outer {
    char pad0[0x10];
    Inner *inner;
    char pad14[4];
    void sub_0056ce80();
    void func_00413d90();
};

void Outer::sub_0056ce80()
{
    func_0056ce80();
}

void Outer::func_00413d90()
{
    sub_0056ce80();
    Inner *p = inner;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            p->vptr[1](p);
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                p->vptr[2](p);
            }
        }
    }
}
