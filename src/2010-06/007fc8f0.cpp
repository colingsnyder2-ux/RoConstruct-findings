// roc 2010-06 007fc8f0  unit: CXTPControlLabel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc8f0
//
// 007fc8f0  b8087bbe00           mov eax, 0xbe7b08
// 007fc8f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc8f0()
{
    return &G;
}
