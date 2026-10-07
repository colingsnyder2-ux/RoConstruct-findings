// roc 2007-08 00677380  unit: CXTPPopupBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00677380
//
// 00677380  b8686a8b00           mov eax, 0x8b6a68
// 00677385  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00677380()
{
    return &G;
}
