// from server: 52% by colin
extern "C" int __cdecl sub_52c940(int, int);

int g_8bdc14;
int g_8bdc18;

void sub_486ef0()
{
    __try
    {
        if ((g_8bdc18 & 1) == 0)
        {
            g_8bdc18 |= 1;
            g_8bdc14 = sub_52c940(-1, 0x7b3510);
        }
    }
    __except (1)
    {
    }
}
