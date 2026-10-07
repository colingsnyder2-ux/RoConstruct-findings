// roc 2007-08 00639fc0  unit: CRobloxControlColorSelector  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00639fc0
//
// 00639fc0  b801000000           mov eax, 1
// 00639fc5  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_00639fc0 {

    int f(int a1, int a2, int a3, int a4);
};
int S_func_00639fc0::f(int a1, int a2, int a3, int a4)
{
    return 1;
}
