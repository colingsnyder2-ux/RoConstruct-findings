// roc 2008-06 004338c0  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004338c0
//
// 004338c0  b858258100           mov eax, 0x812558
// 004338c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004338c0()
{
    return &G;
}
