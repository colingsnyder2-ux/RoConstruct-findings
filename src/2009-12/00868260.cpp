// from server: 30% by atomic.potato
struct I_func_00867950 {
    char pad[324];
    int m_x;
};

struct S_func_00867950 {
    char pad[176];
    I_func_00867950* m_p;
    int f();
};

int S_func_00867950::f()
{
    return m_p->m_x;
}

struct CXTPPropertyGridView {
    char pad[332];
    int m_value;
    int f();
};

int CXTPPropertyGridView::f()
{
    S_func_00867950* p = (S_func_00867950*)this;
    p->f();
    return m_value;
}
