// from server: 83% by atomic.potato
extern "C" void __cdecl sub_80B15D(void*);

volatile unsigned char g_00CCA2E0;
volatile int g_00CCA2D8;
volatile int g_00CCA2DC;

void f()
{
    if (!g_00CCA2E0)
    {
        g_00CCA2E0 |= 1;
        g_00CCA2D8 = 0;
        g_00CCA2DC = 0;
        sub_80B15D((void*)0x00A35A80);
    }
}
