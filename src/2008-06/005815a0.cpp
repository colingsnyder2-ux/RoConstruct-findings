// from server: 56% by tester
struct S {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    char pad10[0x10];
    int field20;

    int f();
};

extern "C" int __stdcall sub_5805D0(int);
extern "C" int __stdcall sub_57EA40(int);
extern "C" int __stdcall sub_5CDDD0(int);
extern "C" int __stdcall sub_5CDE10(int);
extern "C" int __stdcall sub_58C5C0(int, int);

int S::f()
{
    int v;
    int eax;
    int edi;
    int ecx;
    int *p;

    ecx = this->field20;
    if (ecx != 0) {
        eax = sub_5805D0(ecx);
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
    if (*(int *)(eax + 0x18) >= 0x10) {
        eax = *(int *)(eax + 4);
    } else {
        eax += 4;
    }
    sub_58C5C0(eax, ecx);

    ecx = *(int *)((char *)&v + 0xc);
    eax = *(int *)ecx;
    {
        int (*fp)() = (int (*)())*(int *)eax;
        return fp();
    }
}
