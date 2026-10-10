// from server: 52% by colin
extern "C" int __cdecl sub_52C940(int, int);

int g_8bdc24;
int g_8bdc28;

void sub_486FF0()
{
    __try
    {
        if ((g_8bdc28 & 1) == 0)
        {
            g_8bdc28 |= 1;
            g_8bdc24 = sub_52C940(-1, 0x7b3dc8);
        }
    }
    __except (1)
    {
    }
}
