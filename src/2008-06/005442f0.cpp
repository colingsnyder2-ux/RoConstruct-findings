// from server: 49% by atomic.potato
extern "C" void __cdecl sub_5460d0(void *, void *, void *);

struct S
{
    void f(void *, void *);
};

void S::f(void *a, void *b)
{
    sub_5460d0(a, b, (char *)this + 8);
}
