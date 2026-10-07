// roc 2011-06 00430690  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430690
//
// 00430690  83c8ff               or eax, 0xffffffff
// 00430693  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00430690 {

    int f(int a1, int a2, int a3);
};
int S_func_00430690::f(int a1, int a2, int a3)
{
    return -1;
}
