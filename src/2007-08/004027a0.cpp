// from server: 36% by colin
extern "C" int __stdcall func_0052c940(int, int);

int* g_8baeb0;
unsigned int g_8baeb4;

void func_004027a0()
{
    if ((g_8baeb4 & 1) == 0)
    {
        g_8baeb4 |= 1;
        g_8baeb0 = (int*)func_0052c940(-1, (int)0x89a170);
    }
}
