// from server: 55% by atomic.potato
struct S
{
};

int __cdecl f(S *p)
{
    if (!p)
        return 0;

    int *v = *(int **)p;
    int (*g)(int, int, int, int *) =
        (int (*)(int, int, int, int *))v[22];
    int x;
    return g(2, x, x, &x);
}
