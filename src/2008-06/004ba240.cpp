// from server: 93% by atomic.potato
struct S
{
    int __cdecl f(int *a, int *b);
};

int __cdecl S::f(int *a, int *b)
{
    int x = *a;
    int y = *b;
    if (x < y)
        return -1;
    return x != y;
}
