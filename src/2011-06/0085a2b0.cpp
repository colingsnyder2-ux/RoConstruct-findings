// roc 2011-06 0085a2b0  unit: CXTPControlWorkspaceActions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a2b0
//
// 0085a2b0  b87c71c900           mov eax, 0xc9717c
// 0085a2b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a2b0()
{
    return &G;
}
