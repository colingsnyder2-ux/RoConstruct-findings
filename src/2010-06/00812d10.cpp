// from server: 60% by atomic.potato
extern "C" void sub_0097d540(void *, int, int, int);
extern "C" int __stdcall InvalidateRect(void *, const void *, int);

struct CXTSplitterWnd
{
    char pad0[32];
    void *m_hWnd;
    void f(int a, int b, int c);
};

void CXTSplitterWnd::f(int a, int b, int c)
{
    sub_0097d540(this, c, c, a);
    InvalidateRect(m_hWnd, 0, 1);
}
