// from server: 61% by atomic.potato
struct S_func_00838680 {
    char pad0[208];
    int m_x;
    int f();
};

int S_func_00838680::f()
{
    return m_x + 0x28;
}

struct S_func_0085c820 {
    void Close();
};

struct S_func_008391b0 {
    void f();
};

void S_func_008391b0::f()
{
    S_func_00838680 *p = (S_func_00838680 *)0;
    int v = p->f();
    int *q = *(int **)(v + 4);

    while (q != 0) {
        S_func_0085c820 *pane = (S_func_0085c820 *)q;
        pane->Close();
        q = *(int **)q;
    }
}
