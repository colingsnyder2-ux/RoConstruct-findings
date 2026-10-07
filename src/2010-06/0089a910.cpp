// roc 2010-06 0089a910  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a910
//
// 0089a910  b89c0ca700           mov eax, 0xa70c9c
// 0089a915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089a910()
{
    return &G;
}
