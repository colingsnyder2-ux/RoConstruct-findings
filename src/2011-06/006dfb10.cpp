// from server: 89% by atomic.potato
extern "C" void __cdecl fn_80b15d(const char *);

volatile unsigned int g_cd1c04;
volatile int g_cd1bfc;
volatile int g_cd1c00;

void f_006dfb10()
{
    if ((g_cd1c04 & 1) == 0)
    {
        g_cd1c04 |= 1;
        g_cd1bfc = 0;
        g_cd1c00 = 0;
        fn_80b15d("8csm");
    }
}
