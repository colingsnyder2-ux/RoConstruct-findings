// from server: 6% by atomic.potato
struct S
{
    S* f(S*);
};

S* S::f(S* p)
{
    return p->f(0);
}
