// roc 2009-12 0083bf70  unit: CXTPAccessible::XAccessible  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083bf70
//
// 0083bf70  b801400080           mov eax, 0x80004001
// 0083bf75  c22400               ret 0x24
// copied from an identical function in another client (function ?f@S_func_00761180@ns_ROCX00005e@@QAEIHHHHHHHHH@Z)

namespace ns_ROCX00005e {
struct S_func_00761180 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};
unsigned int S_func_00761180::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return 0x80004001u;
}
}
