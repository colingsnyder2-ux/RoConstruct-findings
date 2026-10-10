// from server: 89% by atomic.potato
extern "C" void __cdecl sub_0080B15D(const char *);

volatile unsigned long g_flag_00CD4A1C;
volatile unsigned long g_value_00CD4A14;
volatile unsigned long g_value_00CD4A18;

void f_00736A50()
{
    if (g_flag_00CD4A1C & 1)
        return;

    g_flag_00CD4A1C |= 1;
    g_value_00CD4A14 = 0;
    g_value_00CD4A18 = 0;
    sub_0080B15D("8csm");
}
