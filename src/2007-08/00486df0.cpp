// from server: 41% by colin
extern "C" int __cdecl sub_52C940(int, int);

int* g_8bdc04;
unsigned char g_8bdc08;

int sub_486DF0()
{
    if ((g_8bdc08 & 1) == 0)
    {
        g_8bdc08 |= 1;
        g_8bdc04 = (int*)sub_52C940(-1, 0x7b30e0);
    }
    return *g_8bdc04;
}
