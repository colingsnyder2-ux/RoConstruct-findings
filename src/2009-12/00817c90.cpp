// from server: 59% by atomic.potato
struct S
{
    void f(int*, int);
    void g(int*);
};

void S::f(int* p, int n)
{
    int i = 0;
    if (p != 0)
    {
        for (; i < n; ++i)
            g(p + i);
    }
}
