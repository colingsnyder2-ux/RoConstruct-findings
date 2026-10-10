// from server: 31% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int x)
{
    int (*p)(int) = *(int (**)(int))this;
    return p(x);
}
