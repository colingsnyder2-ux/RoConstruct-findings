// roc 2007-08 004040e0  unit: ATL::CRegObject  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004040e0
//
// 004040e0  b801400080           mov eax, 0x80004001
// 004040e5  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_004040e0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_004040e0::f(int a1, int a2, int a3)
{
    return 0x80004001u;
}
