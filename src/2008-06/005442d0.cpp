// from server: 52% by atomic.potato
struct S {
    void f(void *);
};

extern "C" void __declspec(nothrow) g(S *, void *);

void S::f(void *p)
{
    g(this, p);
}
