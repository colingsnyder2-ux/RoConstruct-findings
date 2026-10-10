// from server: 41% by atomic.potato
struct S
{
    S* __fastcall f(S* p);
};

S* __fastcall S::f(S* p)
{
    S* q = p;
    S* r = this;
    r->f(q);
    return q;
}
