// roc 2007-08 006b3570  unit: CXTPControlGallery  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3570
//
// 006b3570  b894818b00           mov eax, 0x8b8194
// 006b3575  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006b3570()
{
    return &G;
}
