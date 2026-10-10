// from server: 23% by atomic.potato
struct S
{
    void f(int);
};

void S::f(int)
{
}

S *func_004a6790(S *p)
{
    int v = 0;
    p->f(v);
    return p;
}
