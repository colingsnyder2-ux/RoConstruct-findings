// from server: 89% by atomic.potato
typedef unsigned char BYTE;
typedef unsigned long DWORD;

extern "C" void __cdecl sub_0080B15D(void *);

volatile DWORD g_flag;
volatile DWORD g_value1;
volatile DWORD g_value2;

void init()
{
    if ((g_flag & 1) == 0)
    {
        g_flag |= 1;
        g_value1 = 0;
        g_value2 = 0;
        sub_0080B15D((void *)0x00A3E120);
    }
}
