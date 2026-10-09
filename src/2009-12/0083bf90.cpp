// roc 2009-12 0083bf90  unit: CXTPAccessible  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083bf90
//
// 0083bf90  b801400080           mov eax, 0x80004001
// 0083bf95  c22000               ret 0x20
// copied from an identical function in another client (function ?f@S_func_007611a0@ns_ROCX000060@@QAEIHHHHHHHH@Z)

namespace ns_ROCX000060 {
struct S_func_007611a0 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
};
unsigned int S_func_007611a0::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0x80004001u;
}
}
