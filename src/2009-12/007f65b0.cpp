// from server: 78% by atomic.potato
struct I_func_007f5c70
{
    char pad[92];
    int m_x;
};

struct CXTPPropertyGridItem
{
    char pad[52];
    int m_value;
    I_func_007f5c70* m_p;
    int f();
};

int CXTPPropertyGridItem::f()
{
    if (m_p->m_x != 0)
        return 1;
    return m_value;
}
