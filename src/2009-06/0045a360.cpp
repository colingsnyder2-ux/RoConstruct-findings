// roc 2009-06 0045a360  unit: CRobloxWnd::PartDropTarget  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a360
//
// 0045a360  b801000000           mov eax, 1
// 0045a365  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_0045a360 {

    int f(int a1, int a2, int a3, int a4, int a5);
};
int S_func_0045a360::f(int a1, int a2, int a3, int a4, int a5)
{
    return 1;
}
