// from server: 93% by atomic.potato
struct S_func_00501c20
{
    int __declspec(nothrow) __cdecl f(int *a, int *b);
};

int __declspec(nothrow) __cdecl S_func_00501c20::f(int *a, int *b)
{
    unsigned int x = (unsigned int)*a;
    unsigned int y = (unsigned int)*b;
    if (x < y)
        return -1;
    return x != y;
}
