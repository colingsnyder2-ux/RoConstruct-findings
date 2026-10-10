// from server: 89% by atomic.potato
extern "C" void G1_func_0080b15d(const char*);

volatile unsigned int g_00ccf3bc;
volatile int g_00ccf3b4;
volatile int g_00ccf3b8;

void func_0068d090()
{
    if (!(g_00ccf3bc & 1))
    {
        g_00ccf3bc |= 1;
        g_00ccf3b4 = 0;
        g_00ccf3b8 = 0;
        G1_func_0080b15d("8csm");
    }
}
