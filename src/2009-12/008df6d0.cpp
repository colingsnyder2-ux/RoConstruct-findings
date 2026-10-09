// roc 2009-12 008df6d0  unit: CXTPRichRender::XTextHost  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008df6d0
//
// 008df6d0  33c0                 xor eax, eax
// 008df6d2  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_00480eb0@ns_ROCX000015@@QAEHHH@Z)

namespace ns_ROCX000015 {
struct S_func_00480eb0 {

    int f(int a1, int a2);
};
int S_func_00480eb0::f(int a1, int a2)
{
    return 0;
}
}
