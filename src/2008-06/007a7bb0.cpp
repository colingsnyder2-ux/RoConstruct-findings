// from server: 71% by atomic.potato
struct S_func_007a7bb0 {
    char pad0[8];
    int m_8;
    char pad1[8];
    int m_14;
    int m_18;
    int m_1c;
    int m_20;
    int m_24;
    int m_28;
    int m_2c;
    int m_30;
};

extern "C" int __stdcall sub_007a8110(int, int, int);
extern "C" int __stdcall sub_007a99b0(int, int, int);
extern "C" void __stdcall sub_007a53b0(int);
extern "C" void __stdcall sub_007a6da0();

int __stdcall func_007a7bb0(S_func_007a7bb0* p)
{
    if (p == 0)
        return -2;
    int* esi = (int*)p->m_1c;
    if (esi == 0)
        return -2;
    if (p->m_20 == 0)
        return -2;
    if (p->m_24 == 0)
        return -2;
    p->m_14 = 0;
    p->m_8 = 0;
    p->m_18 = 0;
    p->m_2c = 2;
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
        r = sub_007a8110(0, 0, 0);
    else
        r = sub_007a99b0(0, 0, 0);
    p->m_30 = r;
    esi[10] = 0;
    sub_007a53b0((int)esi);
    sub_007a6da0();
    return 0;
}
