// roc 2012-06 004958a0  unit: CRobloxWnd::PartDropTarget  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004958a0
//
// 004958a0  b801000000           mov eax, 1
// 004958a5  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_004958a0 {

    int f(int a1, int a2, int a3, int a4, int a5);
};
int S_func_004958a0::f(int a1, int a2, int a3, int a4, int a5)
{
    return 1;
}
