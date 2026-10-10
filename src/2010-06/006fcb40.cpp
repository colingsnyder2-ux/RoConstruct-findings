// from server: 63% by atomic.potato
struct S
{
    int __cdecl f(int, int, void *);
};

extern int G1_func_006fc610(int, void *);

int S::f(int, int a, void *p)
{
    if (a != 4)
        return G1_func_006fc610(a, p);

    *(int *)p = 0x00bdf4e0;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
    return 0;
}
