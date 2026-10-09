// roc 2009-12 00564810  unit: CXTPRichRender::XTextHost  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00564810
//
// 00564810  33c0                 xor eax, eax
// 00564812  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_00480f20@ns_ROCX000017@@QAEHHHH@Z)

namespace ns_ROCX000017 {
struct S_func_00480f20 {

    int f(int a1, int a2, int a3);
};
int S_func_00480f20::f(int a1, int a2, int a3)
{
    return 0;
}
}
