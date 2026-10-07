// roc 2010-06 00881f60  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00881f60
//
// 00881f60  b8c4e8a600           mov eax, 0xa6e8c4
// 00881f65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00881f60()
{
    return &G;
}
