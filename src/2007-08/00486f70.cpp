// from server: 42% by colin
extern "C" int __cdecl sub_52C940(int, int);

int* g_8bdc1c;
int g_8bdc20;

void __cdecl sub_486F70()
{
    if ((g_8bdc20 & 1) == 0)
    {
        g_8bdc20 |= 1;
        g_8bdc1c = (int*)sub_52C940(0x7b3dd0, 0);
    }
}
