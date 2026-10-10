// from server: 89% by atomic.potato
typedef unsigned char byte;
typedef unsigned int DWORD;

extern "C" void __cdecl sub_80B15D(const char *);

volatile DWORD g_flag_00CD0068;
volatile DWORD g_value_00CD0060;
volatile DWORD g_value_00CD0064;

void sub_6AAF00()
{
    if ((g_flag_00CD0068 & 1) == 0)
    {
        g_flag_00CD0068 |= 1;
        g_value_00CD0060 = 0;
        g_value_00CD0064 = 0;
        sub_80B15D("8csm");
    }
}
