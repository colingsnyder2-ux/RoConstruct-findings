// roc 2010-06 007f0ab0  unit: CXTPControlButtonColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0ab0
//
// 007f0ab0  b8f076be00           mov eax, 0xbe76f0
// 007f0ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f0ab0()
{
    return &G;
}
