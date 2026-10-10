// from server: 89% by atomic.potato
typedef unsigned char byte;
typedef unsigned long dword;

volatile dword g_flag = 0;
volatile dword g_value1 = 0;
volatile dword g_value2 = 0;

extern "C" void __cdecl function_0080b15d(const char *);

void function_00697f30()
{
    if (g_flag & 1)
        return;

    g_flag |= 1;
    g_value1 = 0;
    g_value2 = 0;
    function_0080b15d("8csm");
}
