// from server: 52% by colin
extern "C" int __stdcall sub_52C940(int, int);

int g_8bdc3c;
int g_8bdc40;

void sub_487170()
{
    __try
    {
        if ((g_8bdc40 & 1) == 0)
        {
            g_8bdc40 |= 1;
            g_8bdc3c = sub_52C940(-1, 0x7b4c08);
        }
    }
    __except (1)
    {
    }
}
