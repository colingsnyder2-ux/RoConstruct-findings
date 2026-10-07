// roc 2009-06 0077f6a0  unit: CXTPStatusBarPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f6a0
//
// 0077f6a0  b868cd8f00           mov eax, 0x8fcd68
// 0077f6a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0077f6a0()
{
    return &G;
}
