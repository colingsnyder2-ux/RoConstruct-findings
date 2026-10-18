// from server: 63% by colin
struct S {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    char pad10[0x10];
    int field20;

    int f();
};

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
extern "C" int __cdecl sub_57EA40(int);
extern "C" int __cdecl sub_5CDDD0(int);
extern "C" int __cdecl sub_5CDE10(int);
extern "C" int __cdecl sub_58C5C0(int, int);

int S::f()
{
    int eax;
    int edi;
    int ecx;
    int *p;

    ecx = this->field20;
    if (ecx != 0) {
        eax = _InterlockedExchangeAdd((volatile long*)ecx, 0);
    } else {
        eax = 0;
    }
    edi = sub_57EA40(eax);

    eax = this->fieldC;
    p = (int *)(eax + 0x288);
    eax = *p;
    {
        int (*fp)(int, int) = (int (*)(int, int))*(int *)(eax + 4);
        eax = fp((int)p, 2);
    }
    sub_5CDDD0(eax);

    eax = this->fieldC;
    p = (int *)(eax + 0x288);
    eax = *p;
    {
        int (*fp)(int, int) = (int (*)(int, int))*(int *)(eax + 4);
        eax = fp((int)p, edi);
    }
    sub_5CDE10(eax);

    eax = this->field4;
    ecx = this->fieldC;
    eax += 4;
    if (*(unsigned int *)(eax + 0x18) >= 0x10) {
        eax = *(int *)(eax + 4);
    } else {
        eax += 4;
    }
    sub_58C5C0(eax, ecx);

    {
        int (*fp)() = (int (*)())*(int *)(*(int *)ecx);
        return fp();
    }
}
