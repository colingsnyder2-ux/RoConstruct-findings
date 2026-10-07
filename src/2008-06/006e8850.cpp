// roc 2008-06 006e8850  unit: CXTPAccessible::XAccessible  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8850
//
// 006e8850  b801400080           mov eax, 0x80004001
// 006e8855  c22400               ret 0x24
// auto-matched from its assembly shape

struct S_func_006e8850 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};
unsigned int S_func_006e8850::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return 0x80004001u;
}
