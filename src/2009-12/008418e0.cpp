// from server: 49% by atomic.potato
struct CXTPCustomizeCommandsPage
{
    virtual void f();
    void f(int, int);
    int pad0[90];
    int m_refCount;
    unsigned char m_flags;
};

void CXTPCustomizeCommandsPage::f()
{
    if (--m_refCount == 0 && (m_flags & 2))
        f(0, 1);
}
