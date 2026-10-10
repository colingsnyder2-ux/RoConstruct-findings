// from server: 36% by colin
extern "C" void* __stdcall func_0052c940(int, int);

void* g_8baea0;
unsigned int g_8baea4;

void func_004026a0()
{
    if ((g_8baea4 & 1) == 0)
    {
        g_8baea4 |= 1;
        g_8baea0 = func_0052c940(-1, (int)0x8998b4);
    }
}
