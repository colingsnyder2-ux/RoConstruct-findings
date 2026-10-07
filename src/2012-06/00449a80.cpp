// roc 2012-06 00449a80  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449a80
//
// 00449a80  b8e425b500           mov eax, 0xb525e4
// 00449a85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00449a80()
{
    return &G;
}
