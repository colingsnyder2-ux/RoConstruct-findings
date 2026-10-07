// roc 2011-06 008f1320  unit: CXTCaptionThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1320
//
// 008f1320  b8b0a1ad00           mov eax, 0xada1b0
// 008f1325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f1320()
{
    return &G;
}
