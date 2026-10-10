// from server: 75% by colin
struct S {
    char pad0[8];
    int f8;
    char padC[8];
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
};

extern "C" int __stdcall sub_72d160(int, int, int);
extern "C" int __stdcall sub_72ea00(int, int, int);
extern "C" void __stdcall sub_724540(int);
extern "C" void __stdcall sub_72c040();

int __stdcall f(S* p)
{
    if (p == 0)
        return -2;
    int* esi = (int*)p->f1c;
    if (esi == 0)
        return -2;
    if (p->f20 == 0)
        return -2;
    if (p->f24 == 0)
        return -2;
    p->f14 = 0;
    p->f8 = 0;
    p->f18 = 0;
    p->f2c = 2;
    esi[4] = esi[2];
    int eax = esi[6];
    esi[5] = 0;
    if (eax < 0) {
        eax = -eax;
        esi[6] = eax;
    }
    int ecx = eax;
    ecx = -ecx;
    ecx = (ecx >> 31) & 0xffffffb9;
    ecx += 0x71;
    esi[1] = ecx;
    int r;
    if (eax == 2)
        r = sub_72d160(0, 0, 0);
    else
        r = sub_72ea00(0, 0, 0);
    p->f30 = r;
    esi[10] = 0;
    sub_724540((int)esi);
    sub_72c040();
    return 0;
}
