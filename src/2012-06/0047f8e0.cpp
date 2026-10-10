// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(int, char *p, int n)
{
    if (n == 4)
    {
        *(int *)p = 0x00d6dc48;
        p[4] = 0;
        p[5] = 0;
    }
    else
    {
        f(0, p, n);
    }
}
