// from server: 36% by colin
extern "C" int __stdcall func_0052c940(int, int);

int g_8bae98;
int g_8bae9c;
int g_8b5188;

void func_00402620()
{
    if ((g_8bae9c & 1) == 0)
    {
        g_8bae9c |= 1;
        g_8bae98 = func_0052c940(-1, 0x7a5260);
    }
}
