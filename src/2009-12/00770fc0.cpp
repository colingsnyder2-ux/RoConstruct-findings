// from server: 69% by atomic.potato
extern "C" int __stdcall sub_4c1ca0(int *);
extern "C" void __stdcall sub_76f4f0(int *, int, int, int);

struct S
{
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    int v = 0;
    int *p = (int *)sub_4c1ca0(&v);
    sub_76f4f0(p, a, b, c);
    return a;
}
