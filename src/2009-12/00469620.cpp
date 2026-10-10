// from server: 85% by atomic.potato
extern "C" volatile unsigned char g_flag = 0;
extern "C" volatile int g_value1 = 0;
extern "C" volatile int g_value2 = 0;
extern "C" int g_result = 0;

int func_00469620()
{
    if ((g_flag & 1) == 0)
    {
        g_flag |= 1;
        g_value1 = 0;
        g_value2 = 0;
    }
    return (int)&g_result;
}
