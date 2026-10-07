// roc 2011-06 00871820  unit: CXTPToolTipContext::CHTMLToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871820
//
// 00871820  b8e8c8ac00           mov eax, 0xacc8e8
// 00871825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00871820()
{
    return &G;
}
