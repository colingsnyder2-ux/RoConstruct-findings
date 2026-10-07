// roc 2010-06 007f00f0  unit: CPatchedControlComboBox  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f00f0
//
// 007f00f0  b801400080           mov eax, 0x80004001
// 007f00f5  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_007f00f0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5);
};
unsigned int S_func_007f00f0::f(int a1, int a2, int a3, int a4, int a5)
{
    return 0x80004001u;
}
