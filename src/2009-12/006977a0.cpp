// from server: 58% by atomic.potato
extern "C" void __cdecl f(int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        f(a, b, c);
        return;
    }

    int *p = (int *)b;
    *p = 0x00b38990;
    ((char *)p)[4] = 0;
    ((char *)p)[5] = 0;
}
