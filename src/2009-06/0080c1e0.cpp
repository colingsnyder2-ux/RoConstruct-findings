// roc 2009-06 0080c1e0  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080c1e0
//
// 0080c1e0  b8bcc69000           mov eax, 0x90c6bc
// 0080c1e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080c1e0()
{
    return &G;
}
