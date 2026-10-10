// from server: 71% by atomic.potato
extern "C" void __cdecl function_006e2240(void *, void *, void *, void *, void *, void *);

struct S
{
    void f(void *, void *, void *, void *, void *);
};

void S::f(void *a, void *b, void *c, void *d, void *e)
{
    function_006e2240(this, e, d, c, b, a);
}
