// from server: 84% by atomic.potato
struct S_func_00645830 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct S {
    char pad0[8];
    void** m_x;
    void g(int a1);
    bool h(int a1);
    void i();
};

void S::g(int a1)
{
    S_func_00645830* p = (S_func_00645830*)a1;
    p->f((int)this);
    if (h(a1))
    {
        void** v = m_x;
        void (*fn)() = (void (*)())(v[4]);
        fn();
    }
    else
    {
        i();
    }
}
