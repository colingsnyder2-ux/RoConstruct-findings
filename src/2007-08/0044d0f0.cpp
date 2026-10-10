// from server: 55% by colin
extern "C" int __cdecl sub_00554B20();

int g_8bbed8;
int g_8bbed4;

void func_0044d0f0()
{
    __try
    {
        if ((g_8bbed8 & 1) == 0)
        {
            g_8bbed8 |= 1;
            g_8bbed4 = sub_00554B20();
        }
    }
    __except (1)
    {
    }
}
