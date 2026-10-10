// from server: 23% by atomic.potato
struct S_func_00838680
{
    char pad0[208];
    int m_x;
    int f();
};

int S_func_00838680::f()
{
    return m_x + 0x28;
}

struct S_func_0085d240
{
    int pad0[2];
};

struct S_func_00839180
{
    int f();
};

int S_func_00839180::f()
{
    S_func_00838680 *p = (S_func_00838680 *)0;
    int *q = (int *)p->f();
    int esi = q[1];

    while (esi != 0)
    {
        S_func_0085d240 *pane = (S_func_0085d240 *)esi;
        q = (int *)pane;
        esi = q[2];
        pane->pad0[0] = pane->pad0[0];
        esi = q[0];
    }
    return 0;
}
