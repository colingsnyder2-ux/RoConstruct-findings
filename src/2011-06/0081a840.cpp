// from server: 8% by atomic.potato
struct CCommandBarCmdUI
{
    int m_padding[10];
    int m_value;
    int f();
};

int CCommandBarCmdUI::f()
{
    return m_value ? 1 : 0;
}
