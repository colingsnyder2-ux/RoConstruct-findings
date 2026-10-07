// roc 2009-06 008099e0  unit: CXTCaptionThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008099e0
//
// 008099e0  b820bf9000           mov eax, 0x90bf20
// 008099e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008099e0()
{
    return &G;
}
