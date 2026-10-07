// roc 2008-06 00433380  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433380
//
// 00433380  b8e8248100           mov eax, 0x8124e8
// 00433385  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433380()
{
    return &G;
}
