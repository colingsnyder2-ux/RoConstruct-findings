// from server: 57% by atomic.potato
struct S
{
    int f(int, int);
};

int S::f(int, int)
{
    if (*reinterpret_cast<int *>((char *)this + 0xb0) == 0)
        return 0;

    struct V
    {
        int (**table)();
    };

    V *p = *reinterpret_cast<V **>((char *)this + 0xb0);
    return p->table[0x154 / sizeof(int *)]();
}
