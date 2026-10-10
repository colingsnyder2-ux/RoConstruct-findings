// from server: 33% by colin
struct XTPDockingPaneNativeXPTheme
{
    char pad0[0x1d4];
    int field_1d4;
    int method_69ec10();
    int method_6e54b0(int);
    int method_6ea1d0(void*);
    int method_6ea200(void*, void*, void*, int);
    int method_6ea900(int, int, int, int, int, int, int, int, int);
    int method_6e8600(int, int, int, int, int, int, int, int, int);
    int method_6eb520(int, int, int, int, int, int, int, int, int);
};

int XTPDockingPaneNativeXPTheme::method_6eb520(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int r = method_69ec10();
    if (r == 0)
    {
        return method_6ea900(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }
    int v = method_6e54b0((a3 == 0) ? 0x13 : 0x9);
    int b = a4;
    int c1 = a1;
    int c2 = a2;
    if (b != 0)
    {
        c1 -= 2;
    }
    else
    {
        c2 -= 2;
    }
    int ebp = a5;
    int edi = a6;
    int ecx2 = *(int*)(ebp + 0x2c);
    int edx2 = *(int*)(this);
    edx2 = *(int*)(edx2 + 0x60);
    int tmp[4];
    tmp[0] = c1;
    tmp[1] = c2;
    tmp[2] = a7;
    tmp[3] = a8;
    ((int (__thiscall*)(void*, int, int, int, int, int*, int, int))edx2)(this, edi, ecx2, v, 0x10, tmp, 3, b);
    int r2 = method_6ea1d0((void*)ebp);
    int eax2;
    if (r2 != 0)
    {
        eax2 = v;
    }
    else
    {
        eax2 = method_6e54b0(0x11);
    }
    int edx3 = *(int*)(edi);
    int eax3 = *(int*)(edx3 + 0x38);
    ((int (__thiscall*)(void*, int))eax3)((void*)edi, eax2);
    if (b != 0)
    {
        c1 += 1;
        c2 += 4;
    }
    else
    {
        c1 += 4;
        c2 += 1;
    }
    method_6ea200((void*)edi, (void*)ebp, &c1, b);
    int edx4 = c1;
    int ecx4 = c2;
    int tmp2[4];
    tmp2[0] = edx4;
    tmp2[1] = ecx4;
    tmp2[2] = a7;
    tmp2[3] = a8;
    return method_6e8600(edi, a9, b, 0, tmp2[0], tmp2[1], tmp2[2], tmp2[3], 0);
}
