// from server: 15% by atomic.potato
struct S
{
    void f(int, int);
};

void S::f(int a, int b)
{
}

S *g()
{
    int x = 0;
    S *p = 0;
    p->f(x, 0);
    return p;
}
