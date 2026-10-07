// roc 2009-06 0077f770  unit: CXTPStatusBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f770
//
// 0077f770  b884cd8f00           mov eax, 0x8fcd84
// 0077f775  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0077f770()
{
    return &G;
}
