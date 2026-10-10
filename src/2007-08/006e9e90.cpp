// from server: 25% by colin
struct XTPDockingPanePaintThemes_CXTPDockingPaneVisualStudio2005SecondTheme
{
    char pad0[0x1e4];
    char field_1e4[0x20];
    char field_204[0x20];
    char field_224[0x0c];
    char field_230[0x0c];
    int field_23c;
    int method(int, int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_682240(int, int, int, int, int);
extern "C" int __stdcall sub_682560(int);
extern "C" int __stdcall sub_6805f0(int, int, int);
extern "C" int __stdcall sub_680680(int);
extern "C" int __stdcall sub_63097c(int, int, int, int);
extern "C" int __stdcall sub_630976(int, int, int);

int XTPDockingPanePaintThemes_CXTPDockingPaneVisualStudio2005SecondTheme::method(
    int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    char *base = (char *)this;
    int *p;
    int v;
    int r;

    if (a5 != 0)
        p = (int *)(base + 0x204);
    else
        p = (int *)(base + 0x1e4);

    sub_682240(a1, (int)p, a6, a7, 0);
    sub_682560(a1);

    if (a1 != 0)
        v = *(int *)(a1 + 4);
    else
        v = 0;

    sub_6805f0((int)&r, v, *(int *)(base + 0x23c));

    if (a6 != 0)
    {
        sub_63097c(a1, (int)&r, a2, a3 - 1);
        sub_630976(a1, a4, a3 - 1);
        sub_630976(a1, a4, a3);
        sub_630976(a1, a3, a4);
    }
    else
    {
        sub_63097c(a1, (int)&r, a2, a3);
        sub_630976(a1, a4, a3);
        sub_630976(a1, a3, a4 - 1);
        sub_630976(a1, a3 - 1, a4 - 1);
    }

    if (a5 != 0)
        p = (int *)(base + 0x230);
    else
        p = (int *)(base + 0x224);

    if (p[2] == -1)
        v = p[1];
    else
        v = p[2];

    sub_680680((int)&r);
    return v;
}
