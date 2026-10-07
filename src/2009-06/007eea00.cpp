// roc 2009-06 007eea00  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eea00
//
// 007eea00  b83c9a9000           mov eax, 0x909a3c
// 007eea05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007eea00()
{
    return &G;
}
