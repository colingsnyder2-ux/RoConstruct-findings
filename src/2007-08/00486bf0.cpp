// from server: 46% by colin
extern "C" int __cdecl sub_52C940(int, int);

int g_8bdbe8;
int g_8bdbe4;

int sub_486BF0()
{
    if ((g_8bdbe8 & 1) == 0)
    {
        g_8bdbe8 |= 1;
        g_8bdbe4 = sub_52C940(-1, 0x7b19d0);
    }
    return g_8bdbe4;
}
