// from server: 58% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4)
    {
        int *p = (int *)b;
        *p = 0xb569d0;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
    else
    {
        f(a, b, c);
    }
}
