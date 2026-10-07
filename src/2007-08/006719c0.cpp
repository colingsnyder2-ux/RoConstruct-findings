// roc 2007-08 006719c0  unit: CXTPAccessible  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006719c0
//
// 006719c0  b801400080           mov eax, 0x80004001
// 006719c5  c22000               ret 0x20
// auto-matched from its assembly shape

struct S_func_006719c0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
};
unsigned int S_func_006719c0::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0x80004001u;
}
