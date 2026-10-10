// from server: 87% by atomic.potato
typedef void (__cdecl *FunctionType)();

volatile unsigned char g_00cd4e5c;
volatile int g_00cd4e54;
volatile int g_00cd4e58;

extern "C" void __cdecl Function_0080b15d();

void Function_00740e50()
{
    if (!g_00cd4e5c)
    {
        g_00cd4e5c |= 1;
        g_00cd4e54 = 0;
        g_00cd4e58 = 0;
        Function_0080b15d();
    }
}
