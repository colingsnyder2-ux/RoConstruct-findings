// roc 2009-06 00779f10  unit: CXTPControlTabWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779f10
//
// 00779f10  b86c6fa200           mov eax, 0xa26f6c
// 00779f15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00779f10()
{
    return &G;
}
