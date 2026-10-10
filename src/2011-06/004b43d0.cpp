// from server: 89% by atomic.potato
extern "C" void G1_func_0080b15d(const void *);

volatile unsigned long g_00cb5960;
volatile unsigned long g_00cb5958;
volatile unsigned long g_00cb595c;
const char g_00a321b0[] = "8csm";

void func_004b43d0()
{
    if (!(g_00cb5960 & 1))
    {
        g_00cb5960 |= 1;
        g_00cb5958 = 0;
        g_00cb595c = 0;
        G1_func_0080b15d(g_00a321b0);
    }
}
