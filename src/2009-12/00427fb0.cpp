// from server: 40% by atomic.potato
extern "C" void __cdecl sub_427f40(int, int, int *);

struct CMainFrame
{
    void f();
};

void CMainFrame::f()
{
    int a[4] = { 0, 0, 250, 300 };
    sub_427f40(1, 0xc2, a);
}
