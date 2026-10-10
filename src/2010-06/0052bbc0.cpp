// from server: 11% by atomic.potato
struct S
{
    void f(void *, void *);
};

void S::f(void *a, void *p)
{
    (void)a;
    (void)p;
}
