// from server: 79% by tester
extern "C" int __stdcall sub_77E604();

struct S {
    char pad0[0x10];
    int* p10;
    int* p14;
    char pad18[0x8];
    int* p20;
    int* p24;
    char pad28[0x8];
    int* p30;
    int* p34;
    char pad38[0x8];
    char buf40[0x4];
    int* p44;
    int __cdecl f(int a, int b, int c, int d, int e, int g);
};

int S::f(int a, int b, int c, int d, int e, int g)
{
    if (*p24 != 0)
        sub_77E604();

    if (c == 1 && *p20 != 0)
    {
        int v = *p30;
        a -= v;
        b -= (v >> 31);
    }

    *p10 = 0;
    *p20 = 0;
    *p30 = 0;
    *p14 = 0;
    *p24 = 0;
    *p34 = 0;

    return ((int (__thiscall*)(void*, int, int, int, int, int, int))0x54be70)(buf40, a, b, c, d, e, g);
}
