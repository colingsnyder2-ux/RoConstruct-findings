// from server: 68% by atomic.potato
extern "C" void *sub_770e00(int *);
extern "C" void sub_76f630(void *, int, int, int);

struct S
{
    void *f(int, int, int);
};

void *S::f(int a, int b, int c)
{
    int x = 0;
    void *p = sub_770e00(&x);
    sub_76f630(p, a, b, c);
    return (void *)a;
}
