// roc 2010-06 007fc8a0  unit: CXTPControlWorkspaceActions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc8a0
//
// 007fc8a0  b8ec7abe00           mov eax, 0xbe7aec
// 007fc8a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc8a0()
{
    return &G;
}
