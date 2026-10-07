// roc 2010-06 007f09e0  unit: CXTPControlPopupColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f09e0
//
// 007f09e0  b8d476be00           mov eax, 0xbe76d4
// 007f09e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f09e0()
{
    return &G;
}
