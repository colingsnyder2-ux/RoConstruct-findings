// roc 2011-06 00485e10  unit: CRobloxWnd::PartDropTarget  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00485e10
//
// 00485e10  b801000000           mov eax, 1
// 00485e15  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_00485e10 {

    int f(int a1, int a2, int a3, int a4, int a5);
};
int S_func_00485e10::f(int a1, int a2, int a3, int a4, int a5)
{
    return 1;
}
