// roc 2012-06 00435420  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435420
//
// 00435420  83c8ff               or eax, 0xffffffff
// 00435423  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00435420 {

    int f(int a1, int a2, int a3);
};
int S_func_00435420::f(int a1, int a2, int a3)
{
    return -1;
}
