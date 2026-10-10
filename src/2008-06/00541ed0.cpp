// from server: 21% by atomic.potato
struct S
{
    void f(void *, void *);
};

void __stdcall g(void *, void *);

void S::f(void *a, void *b)
{
    g(a, b);
}
