// from server: 51% by atomic.potato
struct S
{
    int pad10;
    int offset14;
    int index18;
    int pad1c;
    int table20;
    int (*call)(void *);

    int f(void *);
};

int S::f(void *arg)
{
    int *base = (int *)table20;
    int value = *(int *)(*(int **)(base + 0x94 / 4) + index18) + offset14;
    return ((int (*)(void *))(call))((char *)base + 0x94 + value);
}
