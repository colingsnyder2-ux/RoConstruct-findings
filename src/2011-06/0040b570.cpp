// from server: 78% by atomic.potato
struct S
{
    int a;
    int *b;
    S *f(S *x);
};

S *S::f(S *x)
{
    a = x->a;
    if (x->b)
        b = (int *)((int (__thiscall *)(int *))(*(int **)(*(int **)x->b + 8)))(x->b);
    else
        b = 0;
    return this;
}
