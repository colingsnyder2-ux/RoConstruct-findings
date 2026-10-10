// from server: 55% by atomic.potato
struct S
{
    void __cdecl f(void *, unsigned int);
};

void S::f(void *p, unsigned int n)
{
    if (n != 4)
    {
        f(p, n);
        return;
    }

    *(unsigned int *)p = 0x00c1b868;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
