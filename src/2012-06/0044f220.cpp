// from server: 69% by atomic.potato
struct S
{
    S * __cdecl f(void *);
    void g(void *);
};

S *S::f(void *p)
{
    g(p);
    return this;
}
