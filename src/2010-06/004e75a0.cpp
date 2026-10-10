// from server: 53% by atomic.potato
struct S
{
    S* value;
    virtual void f(int);
};

void S::f(int)
{
    S* p = value;
    if (p)
        p->f(1);
}
