// from server: 39% by atomic.potato
struct S
{
    int f(void *, void *, void *);
};

extern "C" void __cdecl sub_420390();
extern "C" void sub_43f190(void *, void *, void *, void *);

int S::f(void *a, void *b, void *c)
{
    sub_420390();
    sub_43f190(0, c, b, a);
    return (int)a;
}
