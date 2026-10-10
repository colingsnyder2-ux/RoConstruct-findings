// from server: 42% by colin
extern "C" int __cdecl sub_52C940(int, int);

int* g_8bdc2c;
int g_8bdc30;

void __cdecl sub_487070()
{
    if ((g_8bdc30 & 1) == 0)
    {
        g_8bdc30 |= 1;
        g_8bdc2c = (int*)sub_52C940(-1, 0x7b3de8);
    }
}
