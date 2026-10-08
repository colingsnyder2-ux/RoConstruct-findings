// roc 2007-08 006f8c60  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8c60
//
// 006f8c60  b884c67d00           mov eax, 0x7dc684
// 006f8c65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f8c60()
{
    return &G;
}
