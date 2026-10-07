// roc 2007-08 006f6320  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6320
//
// 006f6320  b880c37d00           mov eax, 0x7dc380
// 006f6325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f6320()
{
    return &G;
}
