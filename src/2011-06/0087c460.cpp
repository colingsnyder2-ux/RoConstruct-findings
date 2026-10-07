// roc 2011-06 0087c460  unit: CXTPPropertyGridItemBool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c460
//
// 0087c460  b800e5ac00           mov eax, 0xace500
// 0087c465  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0087c460()
{
    return &G;
}
