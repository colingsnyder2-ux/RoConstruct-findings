// from server: 63% by atomic.potato
struct CXTPStatusBar
{
    void f(int, int);
};

struct CXTPControlTabWorkspace
{
    void f();
    int pad0[94];
    int pad1[36];
    CXTPStatusBar* statusBar;
};

void CXTPStatusBar::f(int, int)
{
}

void CXTPControlTabWorkspace::f()
{
    CXTPStatusBar* p = statusBar;
    if (p && *(int*)((char*)p + 0x7c) == (int)((char*)this + 0x178))
    {
        *(int*)((char*)p + 0x7c) = 0;
        p->f(0, -1);
    }
}
