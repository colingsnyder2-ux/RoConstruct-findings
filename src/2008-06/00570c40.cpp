// from server: 87% by atomic.potato
struct S
{
    static int f(S *p);
};

extern int g(int);

int S::f(S *p)
{
    return g(*(int *)((char *)p + 8));
}
