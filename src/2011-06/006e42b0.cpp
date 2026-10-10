// from server: 62% by atomic.potato
extern "C" void sub_006e35a0(void *, void *);

struct S {
    S * __cdecl f(void *, void *);
};

S *S::f(void *a, void *b)
{
    S *p = this;
    sub_006e35a0(p, a);
    return p;
}
