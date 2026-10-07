// roc 2010-06 007efbe0  unit: CPatchedControlComboBox  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007efbe0
//
// 007efbe0  b801400080           mov eax, 0x80004001
// 007efbe5  c21800               ret 0x18
// auto-matched from its assembly shape

struct S_func_007efbe0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6);
};
unsigned int S_func_007efbe0::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 0x80004001u;
}
