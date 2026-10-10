// from server: 39% by atomic.potato
struct S
{
    void f(void *, void *);
};

extern "C" void sub_0053f280(void *, void *);

void S::f(void *a, void *b)
{
    sub_0053f280(a, b);
}
