// roc 2007-08 0066e310  unit: CXTPDockingPaneManager  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e310
//
// 0066e310  b801000000           mov eax, 1
// 0066e315  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_0066e310 {

    int f(int a1, int a2, int a3);
};
int S_func_0066e310::f(int a1, int a2, int a3)
{
    return 1;
}
