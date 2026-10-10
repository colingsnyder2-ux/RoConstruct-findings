// from server: 81% by atomic.potato
struct S
{
    void *p;
};

void *f(S *s)
{
    void *p = s->p;
    while (*((unsigned char *)*(void **)p + 0x5d) == 0)
        p = *(void **)p;
    return p;
}
