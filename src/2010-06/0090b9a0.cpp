// from server: 60% by atomic.potato
extern "C" void *G1_func_004bafd0(int);
extern "C" void G1_func_0090a880(void *, void *, void *, void *);

struct S
{
    void *f(void *, void *, void *);
};

void *S::f(void *a, void *b, void *c)
{
    void *x = G1_func_004bafd0(0);
    G1_func_0090a880(x, a, b, c);
    return a;
}
