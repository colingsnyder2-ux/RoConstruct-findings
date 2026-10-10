// from server: 67% by atomic.potato
extern "C" double __cdecl sub_0078a830(void *, int);
extern "C" void __cdecl sub_00788d60(void *, double);
extern "C" double __cdecl cos(double);

struct S
{
};

int __cdecl f(void *a)
{
    sub_00788d60(a, cos(sub_0078a830(a, 1)));
    return 1;
}
