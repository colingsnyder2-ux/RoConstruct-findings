// from server: 75% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    struct V
    {
        void (__thiscall *g)(V *, int);
    };

    V *p = *(V **)this;
    if (p)
        p->g(p, 1);
}
