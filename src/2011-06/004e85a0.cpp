// from server: 82% by atomic.potato
typedef unsigned char BYTE;
typedef unsigned long DWORD;

extern "C" void __cdecl sub_0080B15D(const char *);

BYTE g_initialized = *(BYTE *)0x00CB8048;
DWORD g_value0 = *(DWORD *)0x00CB8040;
DWORD g_value1 = *(DWORD *)0x00CB8044;

void __cdecl function_004E85A0()
{
    if (!g_initialized)
    {
        g_initialized = 1;
        g_value0 = 0;
        g_value1 = 0;
        sub_0080B15D("8csm");
    }
}
