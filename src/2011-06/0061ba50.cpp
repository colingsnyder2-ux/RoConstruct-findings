// from server: 91% by atomic.potato
struct S
{
};

void __cdecl f(void *p, int value)
{
    if (value != 4)
    {
        extern void target(void *, int);
        target(p, value);
        return;
    }

    *(unsigned long *)p = 0x00c4a6e0;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
