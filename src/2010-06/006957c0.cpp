// from server: 43% by atomic.potato
struct S
{
    int (**vtable)(void *, void *);
    int (**g)(void *, void *);
    int f(int *a, void *b);
};

int S::f(int *a, void *b)
{
    if (a)
        return g[0](reinterpret_cast<char *>(g) + reinterpret_cast<int>(a) - 28, b);
    return g[0](reinterpret_cast<char *>(g), b);
}
