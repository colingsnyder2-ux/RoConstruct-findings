// from server: 44% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int *p;
    p = (int *)this;
    if (p == 0)
        return 0;
    p = (int *)p[1];
    if (p == 0)
        return 1;
    return S::f() + 1;
}
