// roc 2011-06 00851900  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851900
//
// 00851900  b801400080           mov eax, 0x80004001
// 00851905  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00851900 {

    unsigned int f(int a1);
};
unsigned int S_func_00851900::f(int a1)
{
    return 0x80004001u;
}
