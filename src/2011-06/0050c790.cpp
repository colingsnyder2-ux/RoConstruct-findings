// from server: 93% by atomic.potato
struct S_func_0050c790 {
    int __cdecl f(int *a, int *b);
};

int __cdecl S_func_0050c790::f(int *a, int *b)
{
    int x = *a;
    int y = *b;
    if (x < y)
        return -1;
    return x != y;
}
