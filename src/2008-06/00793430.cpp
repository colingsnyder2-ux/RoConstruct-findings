// roc 2008-06 00793430  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793430
//
// 00793430  b80cb58600           mov eax, 0x86b50c
// 00793435  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00793430()
{
    return &G;
}
