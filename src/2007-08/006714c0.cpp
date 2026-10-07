// roc 2007-08 006714c0  unit: CPatchedControlComboBox  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006714c0
//
// 006714c0  b801400080           mov eax, 0x80004001
// 006714c5  c21800               ret 0x18
// auto-matched from its assembly shape

struct S_func_006714c0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6);
};
unsigned int S_func_006714c0::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 0x80004001u;
}
