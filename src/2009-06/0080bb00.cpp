// roc 2009-06 0080bb00  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080bb00
//
// 0080bb00  b834c59000           mov eax, 0x90c534
// 0080bb05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080bb00()
{
    return &G;
}
