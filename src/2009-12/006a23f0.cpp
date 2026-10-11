// from server: 41% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl sub_63E9E0(int*);
extern "C" int __cdecl sub_63E780(int, int, int, int);
extern "C" int __cdecl sub_788BA0(int, int, int);

struct Holder {
    void (__thiscall *vtbl)(void);
    volatile long ref1;
    volatile long ref2;
};

struct S {
    void __cdecl func(int a, int b, int c);
};

void S::func(int a, int b, int c)
{
    int local[2];
    sub_63E9E0(local);
    int esi = local[0];
    int v = sub_788BA0(c, -1, 0);
    sub_63E780(esi, 3, 0x9d2bf8, v);
    Holder* h = (Holder*)b;
    if (h) {
        if (_InterlockedExchangeAdd(&h->ref1, -1) == 1) {
            h->vtbl();
            if (_InterlockedExchangeAdd(&h->ref2, -1) == 1) {
                h->vtbl();
            }
        }
    }
    *(int*)0 = *(int*)4;
}
