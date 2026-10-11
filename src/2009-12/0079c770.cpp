// from server: 93% by atomic.potato
extern "C" double __cdecl sub_0078a830(void *, int);
extern "C" double __cdecl ceil(double);
extern "C" void __cdecl sub_00788d60(void *, double);

struct S
{
};

int __cdecl f(void *a)
{
    double x = sub_0078a830(a, 1);
    x = ceil(x);
    sub_00788d60(a, x);
    return 1;
}
