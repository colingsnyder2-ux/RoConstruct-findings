// roc 2011-06 008f3470  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3470
//
// 008f3470  b8c4a7ad00           mov eax, 0xada7c4
// 008f3475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f3470()
{
    return &G;
}
