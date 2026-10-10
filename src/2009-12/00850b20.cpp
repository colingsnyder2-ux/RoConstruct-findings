// from server: 16% by atomic.potato
struct S
{
    int __cdecl f(int, int);
};

int S::f(int a, int b)
{
    if (this == 0)
        return 0;
    return 0;
}
