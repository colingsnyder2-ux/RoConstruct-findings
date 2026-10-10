// from server: 43% by colin
extern "C" int __cdecl func_0052c940(int, int);

int g_8be2ec;
int g_8be2f0;

void func_00498d00()
{
    if (!(g_8be2f0 & 1)) {
        g_8be2f0 |= 1;
        g_8be2ec = func_0052c940(0x79ccc0, -1);
    }
}
