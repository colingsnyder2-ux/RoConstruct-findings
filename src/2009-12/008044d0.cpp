// from server: 46% by atomic.potato
struct S
{
    int Get();
    int *vftable;
    int pad[64];
    int value;
};

int S::Get()
{
    S *p = this;
    while (p->value == 0)
    {
        int (*f)(S *) = (int (*)(S *))p->vftable[101];
        p = (S *)f(p);
        if (p == 0)
            return 0;
    }
    return p->value;
}
