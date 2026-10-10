// from server: 66% by atomic.potato
struct UnifiedWidget
{
    int (__thiscall *m_check)(UnifiedWidget *);
    char pad0[0x50];
    int (__thiscall *m_action)(UnifiedWidget *, int);
    void f(int);
};

void UnifiedWidget::f(int value)
{
    if (m_check(this))
    {
        m_action(this, value);
        f(value);
    }
}
