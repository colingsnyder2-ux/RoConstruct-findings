// from server: 44% by atomic.potato
struct S_func_00645830
{
    char pad0[4];
    int m_x;
    void f(int a1);
};

void S_func_00645830::f(int a1)
{
    m_x = a1;
}

extern "C" void __cdecl f_0064aff0(int);

struct MovingNoPhysicsBase
{
    int pad0;
    int pad1;
    S_func_00645830* m_state;
    void f(int);
};

void MovingNoPhysicsBase::f(int a1)
{
    S_func_00645830* p = m_state;
    p->f(a1);
    f_0064aff0(a1);
}
