// roc 2011-06 00459be0  unit: VCRoblox3D::?$CComObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00459be0
//
// 00459be0  b801400080           mov eax, 0x80004001
// 00459be5  c21c00               ret 0x1c
// auto-matched from its assembly shape

struct S_func_00459be0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};
unsigned int S_func_00459be0::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return 0x80004001u;
}
