// roc 2009-12 004768e0  unit: VCWorkspace::?$CComObject  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004768e0
//
// 004768e0  33c0                 xor eax, eax
// 004768e2  c21000               ret 0x10
// copied from an identical function in another client (function ?f@S_func_0044cf20@ns_ROCX0000bb@@QAEHHHHH@Z)

namespace ns_ROCX0000bb {
struct S_func_0044cf20 {

    int f(int a1, int a2, int a3, int a4);
};
int S_func_0044cf20::f(int a1, int a2, int a3, int a4)
{
    return 0;
}
}
