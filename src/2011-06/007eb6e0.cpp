// from server: 80% by atomic.potato
struct S
{
    int f(int, int);
};

void G_007ec080(S *, int, int);

int S::f(int a, int b)
{
    G_007ec080(this, a, b);
    *(int *)this = 0xabece8;
    *((int *)this + 1) = 0xabecdc;
    return (int)this;
}
