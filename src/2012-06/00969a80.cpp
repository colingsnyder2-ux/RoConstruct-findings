// from server: 44% by atomic.potato
struct S
{
    int v;
    short x;
    short y;
    float a;
    float b;
    S* f(const S&);
    S* g(const S&);
};

S* S::f(const S& p)
{
    a = (float)p.x;
    b = (float)p.y;
    g(*this);
    return this;
}
