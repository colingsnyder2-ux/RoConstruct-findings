// from server: 53% by atomic.potato
struct S
{
};

int __cdecl f(void *p)
{
    if (p == 0)
        return 0;

    struct V
    {
        int (**table)(void *, int, void *);
    };

    V *v = (V *)p;
    return v->table[22](p, 100, (char *)&p + 12);
}
