// from server: 52% by colin
extern "C" int __cdecl sub_52C940(int, int);

int g_8bdbec;
int g_8bdbf0;

void sub_486C70()
{
    __try
    {
        if (!(g_8bdbf0 & 1))
        {
            g_8bdbf0 |= 1;
            g_8bdbec = sub_52C940(-1, 0x7b19dc);
        }
    }
    __except (1)
    {
    }
}
