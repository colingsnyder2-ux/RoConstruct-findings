// from server: 100% by auto
// roc 2008-06 00773700  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773700
//
// 00773700  b800878600           mov eax, 0x868700
// 00773705  c3                   ret 

extern char G;

char* func_00773700()
{
    return &G;
}
