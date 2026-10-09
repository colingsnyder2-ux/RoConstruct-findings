// roc 2009-12 008a13d0  unit: CXTPReportInplaceEdit  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a13d0
//
// 008a13d0  b803000000           mov eax, 3
// 008a13d5  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_007c65c0@ns_ROCX0000a6@@QAEIHHH@Z)

namespace ns_ROCX0000a6 {
struct S_func_007c65c0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_007c65c0::f(int a1, int a2, int a3)
{
    return 3u;
}
}
