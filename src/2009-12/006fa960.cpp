// from server: 51% by atomic.potato
extern "C" void *__cdecl sub_004C1CA0(int);
extern "C" void sub_006F8B50(void *, void *, void *, void *);

struct S
{
    void *f(void *, void *, void *);
};

void *S::f(void *a, void *b, void *c)
{
    void *p = sub_004C1CA0(0);
    sub_006F8B50(p, c, b, a);
    return a;
}
