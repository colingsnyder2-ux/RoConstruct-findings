// roc 2010-06 007f00b0  unit: CXTPAccessible::XAccessible  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f00b0
//
// 007f00b0  b801400080           mov eax, 0x80004001
// 007f00b5  c22400               ret 0x24
// auto-matched from its assembly shape

struct S_func_007f00b0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};
unsigned int S_func_007f00b0::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return 0x80004001u;
}
