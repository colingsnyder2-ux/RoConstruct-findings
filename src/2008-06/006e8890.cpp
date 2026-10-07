// roc 2008-06 006e8890  unit: CPatchedControlComboBox  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8890
//
// 006e8890  b801400080           mov eax, 0x80004001
// 006e8895  c21800               ret 0x18
// auto-matched from its assembly shape

struct S_func_006e8890 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6);
};
unsigned int S_func_006e8890::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 0x80004001u;
}
