// from server: 58% by atomic.potato
extern "C" void sub_00926bfe(void*, int, int, int);
extern "C" int __stdcall InvalidateRect(void*, const void*, int);

struct CXTSplitterWnd
{
    int field20;
    void f(int a, int b, int c);
};

void CXTSplitterWnd::f(int a, int b, int c)
{
    sub_00926bfe(this, c, c, a);
    InvalidateRect((void*)field20, 0, 1);
}
