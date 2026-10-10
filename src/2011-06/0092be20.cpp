// from server: 57% by atomic.potato
struct S
{
    void f(int *);
};

void S::f(int *p)
{
    *p = 0xaf5270;
}
