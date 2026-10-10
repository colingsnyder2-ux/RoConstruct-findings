// from server: 33% by atomic.potato
struct S
{
    void f(int, int);
};

void S::f(int a, int b)
{
    extern void g(S *, int, int);
    g(this, a, b);
}
