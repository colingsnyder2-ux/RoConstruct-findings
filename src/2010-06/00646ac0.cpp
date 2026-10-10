// from server: 86% by atomic.potato
extern "C" int __cdecl sub_7a93c6(int);
extern "C" int (__thiscall *g_call_9ea8d8)(int, int);

struct TToolVerb
{
    int pad0[3];
    int object;
    int f();
};

int TToolVerb::f()
{
    int a;
    int b;
    a = *(int *)(object + 0xaa0);
    b = *(int *)(a + 0x1b4);
    if (!b)
        return 0;
    b = sub_7a93c6(b);
    return g_call_9ea8d8(0xbb6900, b);
}
