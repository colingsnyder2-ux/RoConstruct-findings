// from server: 52% by atomic.potato
struct S
{
    S * __cdecl f(S *p);
};

S *S::f(S *p)
{
    S *q = p;
    q->f(p);
    return p;
}
