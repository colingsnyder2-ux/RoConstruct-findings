// from server: 89% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl Call80B15D(const char *);

volatile unsigned int g_d1f0fc;
volatile DWORD g_d1f0f4;
volatile DWORD g_d1f0f8;

void Function0092C8D0()
{
    if (!(g_d1f0fc & 1))
    {
        g_d1f0fc |= 1;
        g_d1f0f4 = 0;
        g_d1f0f8 = 0;
        Call80B15D("8csm");
    }
}
