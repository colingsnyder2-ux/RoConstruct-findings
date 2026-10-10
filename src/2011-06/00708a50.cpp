// from server: 89% by atomic.potato
typedef unsigned char Byte;
typedef unsigned long DWORD;

extern "C" void __cdecl Function0080B15D(const char *);

volatile DWORD g_00CD3124;
volatile DWORD g_00CD3128;
volatile DWORD g_00CD312C;

void Function00708A50()
{
    if ((g_00CD312C & 1) == 0)
    {
        g_00CD312C |= 1;
        g_00CD3124 = 0;
        g_00CD3128 = 0;
        Function0080B15D("8csm");
    }
}
