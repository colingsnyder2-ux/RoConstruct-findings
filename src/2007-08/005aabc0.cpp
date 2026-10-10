// from server: 92% by tester
struct S_func_005aabc0 {
};

double __cdecl f(unsigned char arg)
{
    extern float g_7b58f0;
    extern float g_8c5a18;
    extern unsigned int g_8c5a1c;
    extern float g_797b30;

    int v = (int)arg;
    if (!(g_8c5a1c & 1)) {
        g_8c5a18 = g_7b58f0;
        g_8c5a1c |= 1;
    }
    return (double)v * (double)g_8c5a18 - (double)g_797b30;
}
