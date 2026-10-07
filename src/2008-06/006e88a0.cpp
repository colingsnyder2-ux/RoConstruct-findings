// roc 2008-06 006e88a0  unit: CPatchedControlComboBox  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e88a0
//
// 006e88a0  b801400080           mov eax, 0x80004001
// 006e88a5  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_006e88a0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5);
};
unsigned int S_func_006e88a0::f(int a1, int a2, int a3, int a4, int a5)
{
    return 0x80004001u;
}
