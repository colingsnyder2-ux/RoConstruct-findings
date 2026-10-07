// roc 2008-06 0077a400  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077a400
//
// 0077a400  b8a48f8600           mov eax, 0x868fa4
// 0077a405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0077a400()
{
    return &G;
}
