// from server: 79% by atomic.potato
struct S
{
    unsigned char f(void *);
    int *p8;
    int *pC;
};

unsigned char S::f(void *p)
{
    unsigned char *base;
    int index;

    if (p)
        base = (unsigned char *)p - 0x14;
    else
        base = 0;

    index = *(int *)(base + 0x1c0) + *pC;
    return *(unsigned char *)(index + 0x1c0 + (int)base);
}
