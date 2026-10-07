// roc 2010-06 008987c0  unit: CXTCaptionThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008987c0
//
// 008987c0  b88806a700           mov eax, 0xa70688
// 008987c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008987c0()
{
    return &G;
}
