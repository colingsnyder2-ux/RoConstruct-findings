// roc 2011-06 008f13e0  unit: CXTCaptionButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f13e0
//
// 008f13e0  b8cca1ad00           mov eax, 0xada1cc
// 008f13e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f13e0()
{
    return &G;
}
