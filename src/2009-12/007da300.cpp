// from server: 76% by atomic.potato
struct S {
    int __cdecl f(int);
};

int __cdecl S::f(int p)
{
    if (!p)
        return 0;
    if (!*(int *)(p + 4))
        return 1;
    return f(*(int *)(p + 4)) + 1;
}
