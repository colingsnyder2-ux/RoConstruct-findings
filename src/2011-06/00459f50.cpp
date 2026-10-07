// roc 2011-06 00459f50  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00459f50
//
// 00459f50  b801400080           mov eax, 0x80004001
// 00459f55  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00459f50 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_00459f50::f(int a1, int a2, int a3)
{
    return 0x80004001u;
}
