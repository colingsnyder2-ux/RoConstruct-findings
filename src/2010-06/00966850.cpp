// from server: 40% by atomic.potato
struct S
{
    void *f(void *, void *, void *);
};

extern "C" void *__cdecl fn41c510();
extern "C" void *fn963850(void *, void *, void *, void *);

void *S::f(void *a, void *b, void *c)
{
    void *x = 0;
    x = fn41c510();
    fn963850(x, a, b, c);
    return a;
}
