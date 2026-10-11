// from server: 51% by atomic.potato
struct S
{
    void *f(void *, void *, void *);
};

extern "C" void *__cdecl G1_func_00460e60(int);
extern "C" void *G1_func_006900a0(void *, void *, void *, void *);

void *S::f(void *a, void *b, void *c)
{
    void *v = G1_func_00460e60(0);
    G1_func_006900a0(v, c, b, a);
    return a;
}
