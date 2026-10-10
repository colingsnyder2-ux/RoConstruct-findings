// from server: 89% by atomic.potato
extern "C" void __cdecl sub_80B15D(const char*);

volatile int g_cce6fc;
volatile int g_cce6f4;
volatile int g_cce6f8;

void f_681770()
{
    if (g_cce6fc & 1)
        return;

    g_cce6fc |= 1;
    g_cce6f4 = 0;
    g_cce6f8 = 0;
    sub_80B15D((const char*)0xA3B4D0);
}
