// roc 2008-06 006f50c0  unit: CXTPControlWorkspaceActions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f50c0
//
// 006f50c0  b81c789600           mov eax, 0x96781c
// 006f50c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f50c0()
{
    return &G;
}
