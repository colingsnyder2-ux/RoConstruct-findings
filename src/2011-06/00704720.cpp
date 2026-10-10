// from server: 87% by atomic.potato
extern "C" void __cdecl Function_0080B15D(void);

volatile unsigned char g_flag_00CD2EE8;
volatile int g_value_00CD2EE0;
volatile int g_value_00CD2EE4;

void Function_00704720()
{
    if (!g_flag_00CD2EE8)
    {
        g_flag_00CD2EE8 |= 1;
        g_value_00CD2EE0 = 0;
        g_value_00CD2EE4 = 0;
        Function_0080B15D();
    }
}
