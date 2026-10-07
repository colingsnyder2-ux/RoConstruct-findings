// roc 2008-06 00466670  unit: CSelectionCaption  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466670
//
// 00466670  b001                 mov al, 1
// 00466672  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_00466670 {

    bool f(int a1, int a2, int a3, int a4);
};
bool S_func_00466670::f(int a1, int a2, int a3, int a4)
{
    return true;
}
