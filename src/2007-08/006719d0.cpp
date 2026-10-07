// roc 2007-08 006719d0  unit: CPropertyGridItemBrickColor  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006719d0
//
// 006719d0  b801400080           mov eax, 0x80004001
// 006719d5  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_006719d0 {

    unsigned int f(int a1, int a2, int a3, int a4);
};
unsigned int S_func_006719d0::f(int a1, int a2, int a3, int a4)
{
    return 0x80004001u;
}
