// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(void *, int);
};

void __cdecl S::f(void *p, int value)
{
    if (value == 4)
    {
        *(int *)p = 0x00c1d6f8;
        ((unsigned char *)p)[4] = 0;
        ((unsigned char *)p)[5] = 0;
    }
}
