// roc 2008-06 00709e70  unit: CXTPToolTipContext::CHTMLToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709e70
//
// 00709e70  b830c38500           mov eax, 0x85c330
// 00709e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00709e70()
{
    return &G;
}
