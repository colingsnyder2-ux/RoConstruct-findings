// from server: 78% by atomic.potato
extern unsigned char g_flag;
extern int g_value1;
extern int g_value2;
extern int g_result;

int* func_0049c690()
{
    if ((g_flag & 1) == 0)
    {
        g_flag |= 1;
        g_value1 = 0;
        g_value2 = 0;
    }
    return &g_result;
}
