// from server: 36% by colin
extern "C" int __stdcall func_0052c940(int, int);

int g_8baea8;
int g_8baeac;

void func_00402720()
{
    if ((g_8baeac & 1) == 0)
    {
        g_8baeac |= 1;
        g_8baea8 = func_0052c940(-1, 0x89a168);
    }
}
