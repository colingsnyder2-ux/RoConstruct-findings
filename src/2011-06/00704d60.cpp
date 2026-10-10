// from server: 83% by atomic.potato
extern "C" void __cdecl Function_0080B15D(int value);

static volatile unsigned char g_flag_00CD2F08;
static int g_value_00CD2F00;
static int g_value_00CD2F04;

void Function_00704D60()
{
    if (!g_flag_00CD2F08)
    {
        g_flag_00CD2F08 |= 1;
        g_value_00CD2F00 = 0;
        g_value_00CD2F04 = 0;
        Function_0080B15D(0xA3DFD0);
    }
}
