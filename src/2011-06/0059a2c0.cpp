// from server: 81% by atomic.potato
typedef unsigned char BYTE;

extern "C" void __cdecl Function_0080B15D(const char *);

volatile BYTE g_00CBC108;
volatile int g_00CBC100;
volatile int g_00CBC104;

void Function_0059A2C0()
{
    if ((g_00CBC108 & 1) == 0)
    {
        g_00CBC108 |= 1;
        g_00CBC100 = 0;
        g_00CBC104 = 0;
        Function_0080B15D("8csm");
    }
}
