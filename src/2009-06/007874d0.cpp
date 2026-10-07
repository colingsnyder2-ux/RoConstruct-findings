// roc 2009-06 007874d0  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007874d0
//
// 007874d0  b801400080           mov eax, 0x80004001
// 007874d5  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007874d0 {

    unsigned int f(int a1);
};
unsigned int S_func_007874d0::f(int a1)
{
    return 0x80004001u;
}
