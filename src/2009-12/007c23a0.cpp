// from server: 94% by atomic.potato
extern "C" void __cdecl function_007c2050(int, void *);

struct S
{
};

void __cdecl f(int a, void *p)
{
    if (a != 4)
    {
        function_007c2050(a, p);
        return;
    }

    *(unsigned long *)p = 0x00b639e8;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
