// from server: 44% by atomic.potato
struct S_func_00645830
{
    char pad0[4];
    int m_x;
    void f(int a1);
};

void S_func_00645830::f(int a1)
{
    m_x = (int)a1;
}

extern "C" void __cdecl f_006685b0(int, void *);

struct CleanStage
{
    char pad0[8];
    void *m_stage;
    void *f(int);
};

void *CleanStage::f(int a1)
{
    S_func_00645830 *p = (S_func_00645830 *)a1;
    p->f((int)this);
    f_006685b0(a1, m_stage);
    return this;
}
