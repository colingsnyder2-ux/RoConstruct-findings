// from server: 90% by atomic.potato
extern int g_init;
extern int g_value;
extern int g_flag;
extern int g_result;

int func_0046d130()
{
    if ((g_init & 1) == 0)
    {
        g_init |= 1;
        g_value = 0;
        g_flag = 0;
    }
    return g_result;
}
