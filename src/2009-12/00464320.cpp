// from server: 51% by atomic.potato
extern "C" void __cdecl target(int, int, int);

struct S
{
};

void __cdecl f(int a, int b)
{
    if (a == 4)
    {
        int *p = (int *)b;
        p[0] = 0x00b0aa18;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
    else
    {
        target(0, a, b);
    }
}
