// from server: 63% by atomic.potato
struct S
{
    int f(int a, int b, int c);
};

extern "C" void * __cdecl sub_4202f0(int *);
struct T
{
    void sub_43f2d0(int, int, int);
};

int S::f(int a, int b, int c)
{
    int x = 0;
    void *p = sub_4202f0(&x);
    ((T *)p)->sub_43f2d0(c, b, a);
    return c;
}
