// from server: 42% by colin
extern "C" int __cdecl func_0052c940(int, int);

int g_8bb470;
int g_8bb46c;

void func_0041bf50()
{
    if ((g_8bb470 & 1) == 0) {
        g_8bb470 |= 1;
        g_8bb46c = func_0052c940(-1, 0x8a0420);
    }
}
