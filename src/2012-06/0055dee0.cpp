// from server: 53% by tester
extern "C" int __cdecl func_0067f2e0(const char*);

int g_00e23df4;
int g_00e23df8;

void func_0055dee0()
{
    __try
    {
        if ((g_00e23df8 & 1) == 0)
        {
            g_00e23df8 |= 1;
            g_00e23df4 = func_0067f2e0((const char*)0x00bc49dc);
        }
    }
    __except (1)
    {
    }
}
