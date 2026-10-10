// from server: 89% by atomic.potato
extern "C" void sub_0080b15d(void*);

volatile int g_00ccfa64;
volatile int g_00ccfa5c;
volatile int g_00ccfa60;

void func_00697b50()
{
    if (!(g_00ccfa64 & 1))
    {
        g_00ccfa64 |= 1;
        g_00ccfa5c = 0;
        g_00ccfa60 = 0;
        sub_0080b15d((void*)0x00a3bf60);
    }
}
