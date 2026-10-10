// from server: 89% by atomic.potato
extern "C" void __cdecl call_80b15d(void *);

volatile int g_cbd9dc;
volatile int g_cbd9d4;
volatile int g_cbd9d8;
int g_a35640;

void function_005a9a60()
{
    if (!(g_cbd9dc & 1))
    {
        g_cbd9dc |= 1;
        g_cbd9d4 = 0;
        g_cbd9d8 = 0;
        call_80b15d((void *)&g_a35640);
    }
}
