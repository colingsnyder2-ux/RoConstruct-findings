// from server: 36% by colin
extern "C" int __stdcall sub_0052C940(int, int);

int g_8bb478;
int g_8bb474;

void func_0041bfd0()
{
    if ((g_8bb478 & 1) == 0)
    {
        g_8bb478 |= 1;
        g_8bb474 = sub_0052C940(-1, 0x8a1144);
    }
}
