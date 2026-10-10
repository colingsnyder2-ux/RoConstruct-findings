// from server: 13% by atomic.potato
struct S
{
    void f(S*);
};

void S::f(S* p)
{
    p->f(p);
}
