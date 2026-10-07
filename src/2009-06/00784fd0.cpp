// roc 2009-06 00784fd0  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784fd0
//
// 00784fd0  b801400080           mov eax, 0x80004001
// 00784fd5  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_00784fd0 {

    unsigned int f(int a1, int a2, int a3, int a4);
};
unsigned int S_func_00784fd0::f(int a1, int a2, int a3, int a4)
{
    return 0x80004001u;
}
