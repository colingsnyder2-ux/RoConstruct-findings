// from server: 52% by atomic.potato
extern "C" void __cdecl sub_722b80(void *, void *, void *, void *, void *, void *);

struct S
{
    void __cdecl f(void *, void *, void *, void *);
};

void S::f(void *a, void *b, void *c, void *d)
{
    sub_722b80(d, c, b, a, this, 0);
}
