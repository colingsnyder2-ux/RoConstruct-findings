// roc 2007-08 0067d910  unit: CXTPControlWorkspaceActions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d910
//
// 0067d910  b8a06b8b00           mov eax, 0x8b6ba0
// 0067d915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d910()
{
    return &G;
}
