// from server: 40% by atomic.potato
struct S
{
    void *f(void *, void *, void *);
};

extern "C" void *sub_770e00();
extern "C" void sub_76f3b0(void *, void *, void *, void *);

void *S::f(void *a, void *b, void *c)
{
    void *p = sub_770e00();
    sub_76f3b0(p, a, b, c);
    return a;
}
