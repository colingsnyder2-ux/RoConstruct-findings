// from server: 34% by atomic.potato
extern "C" void __stdcall G1_func_007f3c2c(
    int,
    int,
    int,
    int,
    int,
    int);

extern int G1_global_0098d780;

struct CXTPReportHeaderDropWnd
{
    void f(int, int);
};

void CXTPReportHeaderDropWnd::f(int x, int y)
{
    int width = *(int *)((char *)this + 0x60);
    width = (width - (width >> 31)) >> 1;
    G1_func_007f3c2c(G1_global_0098d780, y - width, 0, x - 6, 0x51, 0);
}
