// from server: 50% by atomic.potato
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
    int f(int* p);
};

int CXTPPropertyGridView::f(int* p)
{
    p[4] = m_value;
    S_func_00867950* s = (S_func_00867950*)this;
    int r = s->f();
    void** vt = *(void***)s;
    void (*fn)(void*) = (void (*)(void*))vt[11];
    fn(s);
    return r;
}
