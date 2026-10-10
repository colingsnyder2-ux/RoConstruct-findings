// from server: 80% by atomic.potato
extern void G1_func_0080b15d();

int g_00CD3428;
int g_00CD342C;
int g_00CD3430;

void func_0070db00()
{
    if ((g_00CD3430 & 1) == 0)
    {
        g_00CD3430 |= 1;
        g_00CD3428 = 0;
        g_00CD342C = 0;
        G1_func_0080b15d();
    }
}
