// from server: 79% by atomic.potato
extern "C" int sub_4673F0(void *);
extern "C" void sub_76A190(void *, int *);

struct S
{
    void f(int *);
};

void S::f(int *p)
{
    int *v = (int *)sub_4673F0((char *)p + 4);
    int x = *v;
    sub_76A190(this, &x);
}
