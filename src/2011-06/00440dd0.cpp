// from server: 70% by atomic.potato
extern "C" void __cdecl f();

volatile unsigned char g_initialized;
volatile int g_value1;
volatile int g_value2;

void f()
{
    if (g_initialized & 1)
        return;
    g_initialized |= 1;
    g_value1 = 0;
    g_value2 = 0;
    f();
}
