// from server: 89% by atomic.potato
extern "C" void __cdecl sub_80B15D(const char *);

volatile unsigned int g_00CCDA7C;
volatile int g_00CCDA74;
volatile int g_00CCDA78;

void f_0065F9A0()
{
    if (!(g_00CCDA7C & 1))
    {
        g_00CCDA7C |= 1;
        g_00CCDA74 = 0;
        g_00CCDA78 = 0;
        sub_80B15D("8csm");
    }
}
