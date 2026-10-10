// from server: 72% by atomic.potato
struct S
{
    void *next;
    int f(void *);
};

int S::f(void *p)
{
    void *q;

    if (!p)
        return 0;

    q = *(void **)((char *)p + 0x4c);
    while (q)
    {
        if (q == this)
            return 1;
        q = *(void **)((char *)q + 0x4c);
    }

    return 0;
}
