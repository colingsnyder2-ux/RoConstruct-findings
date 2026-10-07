// roc 2010-06 00428890  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428890
//
// 00428890  83c8ff               or eax, 0xffffffff
// 00428893  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00428890 {

    int f(int a1, int a2, int a3);
};
int S_func_00428890::f(int a1, int a2, int a3)
{
    return -1;
}
