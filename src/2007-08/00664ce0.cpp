// roc 2007-08 00664ce0  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664ce0
//
// 00664ce0  b8c4977c00           mov eax, 0x7c97c4
// 00664ce5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00664ce0()
{
    return &G;
}
