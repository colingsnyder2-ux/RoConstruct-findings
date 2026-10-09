// roc 2009-12 008df6f0  unit: CXTPRichRender::XTextHost  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008df6f0
//
// 008df6f0  b805400080           mov eax, 0x80004005
// 008df6f5  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00804c20@ns_ROCX000063@@QAEIH@Z)

namespace ns_ROCX000063 {
struct S_func_00804c20 {

    unsigned int f(int a1);
};
unsigned int S_func_00804c20::f(int a1)
{
    return 0x80004005u;
}
}
