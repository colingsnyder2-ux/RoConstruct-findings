// roc 2008-06 00709ed0  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709ed0
//
// 00709ed0  b801400080           mov eax, 0x80004001
// 00709ed5  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00709ed0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_00709ed0::f(int a1, int a2, int a3)
{
    return 0x80004001u;
}
