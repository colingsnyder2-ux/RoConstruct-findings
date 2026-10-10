// from server: 66% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int i = 0;
    while (i < 2)
    {
        struct V
        {
            int (*g)(S *, int);
        };
        S *p = reinterpret_cast<S *>(reinterpret_cast<V *>(this)->g(this, 0));
        if (p && *reinterpret_cast<int *>(reinterpret_cast<char *>(p) + 0x24) == reinterpret_cast<int>(this))
            return reinterpret_cast<int>(p);
        ++i;
    }
    return 0;
}
