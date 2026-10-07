// roc 2009-06 0076da60  unit: CXTPControlWorkspaceActions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076da60
//
// 0076da60  b86c6aa200           mov eax, 0xa26a6c
// 0076da65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076da60()
{
    return &G;
}
