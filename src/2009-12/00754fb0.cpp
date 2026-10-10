// from server: 60% by atomic.potato
struct S
{
};

extern "C" void __cdecl target(int, char *, int);

int __cdecl f(int a, char *p, int n)
{
    if (n != 4)
    {
        target(a, p, n);
        return 0;
    }

    *(int *)p = 0xB5A088;
    p[4] = 0;
    p[5] = 0;
    return 0;
}
