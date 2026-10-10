// from server: 89% by atomic.potato
typedef unsigned char BYTE;

extern "C" void __cdecl Initialize_9831F5(const char *);

volatile int g_initialized_00E16558;
volatile int g_value_00E16550;
volatile int g_value_00E16554;

void Function_0040C580()
{
    if (g_initialized_00E16558 & 1)
        return;

    g_initialized_00E16558 |= 1;
    g_value_00E16550 = 0;
    g_value_00E16554 = 0;
    Initialize_9831F5("8csm");
}
