// from server: 33% by atomic.potato
struct S
{
    int f();
    void g(int, int);
};

int S::f()
{
    g(0, 0);
    return *(int *)this;
}
