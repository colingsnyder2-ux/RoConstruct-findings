// from server: 41% by atomic.potato
extern void G_006fcdb0(int);

struct S
{
    void __cdecl f(int, int, int);
};

void S::f(int, int, int)
{
    int a;
    if (a == 4)
    {
        int *p = (int *)0;
        *p = 0xb47b10;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
    else
    {
        G_006fcdb0(a);
    }
}
