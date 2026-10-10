// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(int, void *p, int n)
{
    if (n != 4)
        return f(0, p, n);

    *(int *)p = 0x00b3346c;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
