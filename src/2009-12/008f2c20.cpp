// from server: 31% by atomic.potato
struct S
{
    S* f();
    virtual S* g(S*);
};

S* S::f()
{
    S* p = g(this);
    p->g(this);
    return p;
}
