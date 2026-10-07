// roc 2010-06 00466f70  unit: CRobloxWnd::PartDropTarget  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00466f70
//
// 00466f70  b801000000           mov eax, 1
// 00466f75  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_00466f70 {

    int f(int a1, int a2, int a3, int a4, int a5);
};
int S_func_00466f70::f(int a1, int a2, int a3, int a4, int a5)
{
    return 1;
}
