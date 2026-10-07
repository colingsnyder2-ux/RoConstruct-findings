// roc 2011-06 008f3b50  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3b50
//
// 008f3b50  b84ca9ad00           mov eax, 0xada94c
// 008f3b55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f3b50()
{
    return &G;
}
