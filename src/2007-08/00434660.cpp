// roc 2007-08 00434660  unit: CDeclarationView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00434660
//
// 00434660  b868c37800           mov eax, 0x78c368
// 00434665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00434660()
{
    return &G;
}
