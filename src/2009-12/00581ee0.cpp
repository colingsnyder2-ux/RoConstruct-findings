// from server: 40% by atomic.potato
extern "C" void * __cdecl f41c610();
extern "C" void * f57efa0(void *, void *, void *, void *);

struct S
{
    void *f(void *, void *, void *);
};

void *S::f(void *a, void *b, void *c)
{
    void *x = 0;
    void *y = f41c610();
    f57efa0(y, a, b, c);
    return a;
}
