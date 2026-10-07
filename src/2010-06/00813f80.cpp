// roc 2010-06 00813f80  unit: CXTPToolTipContext::CHTMLToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813f80
//
// 00813f80  b80820a600           mov eax, 0xa62008
// 00813f85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00813f80()
{
    return &G;
}
