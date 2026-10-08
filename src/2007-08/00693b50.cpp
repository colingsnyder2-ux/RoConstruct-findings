// roc 2007-08 00693b50  unit: CXTPStatusBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693b50
//
// 00693b50  b83c0b7d00           mov eax, 0x7d0b3c
// 00693b55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00693b50()
{
    return &G;
}
