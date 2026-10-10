// from server: 63% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        c = c;
        return;
    }

    *(int *)b = 0x00b60008;
    ((char *)b)[4] = 0;
    ((char *)b)[5] = 0;
}
