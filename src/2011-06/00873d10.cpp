// roc 2011-06 00873d10  unit: VCRoblox3D::?$CComObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873d10
//
// 00873d10  b801400080           mov eax, 0x80004001
// 00873d15  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_00873d10 {

    unsigned int f(int a1, int a2);
};
unsigned int S_func_00873d10::f(int a1, int a2)
{
    return 0x80004001u;
}
