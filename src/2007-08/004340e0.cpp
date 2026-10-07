// roc 2007-08 004340e0  unit: CDeclarationView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004340e0
//
// 004340e0  b8f8c27800           mov eax, 0x78c2f8
// 004340e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004340e0()
{
    return &G;
}
