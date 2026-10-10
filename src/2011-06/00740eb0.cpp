// from server: 79% by atomic.potato
typedef unsigned char byte;
typedef void (*InitFunc)();

volatile byte g_flag_00cd4e74;
volatile int g_value_00cd4e6c;
volatile int g_value_00cd4e70;

extern InitFunc g_init_00a3f360;

void func_00740eb0()
{
    if (g_flag_00cd4e74 == 0)
    {
        g_flag_00cd4e74 = 1;
        g_value_00cd4e6c = 0;
        g_value_00cd4e70 = 0;
        g_init_00a3f360();
    }
}
