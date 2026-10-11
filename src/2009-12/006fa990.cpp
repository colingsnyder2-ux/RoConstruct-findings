// from server: 69% by atomic.potato
extern "C" void *__cdecl sub_50d800(int);

struct T {
    void __thiscall sub_6f8c90(int, int, int);
};

struct S {
    void *f(int, int, int);
};

void *S::f(int a, int b, int c)
{
    void *p = sub_50d800(0);
    ((T *)p)->sub_6f8c90(a, b, c);
    return (void *)a;
}
