// from server: 73% by tester
extern "C" int __stdcall pubsync_stub();

struct S {
    char pad[0x10];
    int* p10;
    int* p14;
    int* p20;
    int* p24;
    int* p30;
    int* p34;
    char pad2[0x40 - 0x38];
    char buf40[0x60];
    int* pA0;
    int __cdecl f(int a, int b, int c, int d, int e, int f);
};

int S::f(int a, int b, int c, int d, int e, int f)
{
    if (*p24 != 0)
        pubsync_stub();
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
    return ((int (__thiscall*)(void*, int, int, int, int, int, int))0x54f600)(buf40, a, b, c, d, e, f);
}
