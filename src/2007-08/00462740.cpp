// roc 2007-08 00462740  unit: CSelectionCaption  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00462740
//
// 00462740  b001                 mov al, 1
// 00462742  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_00462740 {

    bool f(int a1, int a2, int a3, int a4);
};
bool S_func_00462740::f(int a1, int a2, int a3, int a4)
{
    return true;
}
