// from server: 67% by atomic.potato
extern "C" int __cdecl func_007a7e70(int, int, int);

int __stdcall func_007a8110(int a, int b, int c)
{
    if (b == 0)
        return 0;
    return func_007a7e70(a, b, c);
}
