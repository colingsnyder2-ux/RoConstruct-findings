// from server: 37% by atomic.potato
struct S_func_004d59f0
{
    char pad0[600];
    char m_x;
    void f();
};

void S_func_004d59f0::f()
{
    m_x = (char)0;
}

struct S
{
    void f(S_func_004d59f0 *);
};

void S::f(S_func_004d59f0 *p)
{
    S_func_004d59f0 *base = (S_func_004d59f0 *)((char *)this + 0x528);
    if (p)
    {
        p->f();
    }
    else
    {
        base->f();
    }
}
