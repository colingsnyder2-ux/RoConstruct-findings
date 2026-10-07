// roc 2009-06 00784f80  unit: CXTPToolTipContext::CHTMLToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784f80
//
// 00784f80  b8a0d88f00           mov eax, 0x8fd8a0
// 00784f85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00784f80()
{
    return &G;
}
