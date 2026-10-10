// from server: 67% by atomic.potato
extern "C" void __cdecl sub_788d60(void *, double);
extern "C" double __cdecl sub_78a830(void *, int);
extern "C" double __cdecl sin(double);

struct S
{
};

int __cdecl f(void *value)
{
    sub_788d60(value, sin(sub_78a830(value, 1)));
    return 1;
}
