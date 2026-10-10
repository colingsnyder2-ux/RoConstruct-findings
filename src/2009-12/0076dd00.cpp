// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(int a, void *p, int value)
{
    if (value == 4)
    {
        *(int *)p = 0xb5ff28;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
    else
    {
        f(a, p, value);
    }
}
