// from server: 46% by colin
extern "C" int __cdecl sub_52C940(int, int);

int g_8bb214;
int g_8bb210;

int __cdecl sub_4139F0()
{
    if ((g_8bb214 & 1) == 0)
    {
        g_8bb214 |= 1;
        g_8bb210 = sub_52C940(-1, (int)0x882b68);
    }
    return g_8bb210;
}
