// from server: 49% by atomic.potato
extern "C" void __cdecl sub_545f10(void *, void *, void *);

struct S
{
    void f(void *, void *);
};

void S::f(void *a, void *b)
{
    sub_545f10(a, b, (char *)this + 8);
}
