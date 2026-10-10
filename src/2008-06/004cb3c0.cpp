// from server: 40% by atomic.potato
extern "C" void G1_func_004cb1b0(void *, void *, int);

struct S
{
    void *f(void *, void *);
};

void *S::f(void *a, void *b)
{
    G1_func_004cb1b0(this, b, 0);
    return a;
}
