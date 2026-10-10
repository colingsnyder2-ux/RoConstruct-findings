// from server: 52% by colin
extern "C" int __stdcall func_0052c940(int, int);

int g_8bae94;
int g_8bae90;

void func_004025a0()
{
    __try
    {
        if ((g_8bae94 & 1) == 0)
        {
            g_8bae94 |= 1;
            g_8bae90 = func_0052c940(-1, 0x898ee0);
        }
    }
    __except (1)
    {
    }
}
