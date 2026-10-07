// roc 2010-06 00824540  unit: CXTPControlGallery  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824540
//
// 00824540  b8588ebe00           mov eax, 0xbe8e58
// 00824545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00824540()
{
    return &G;
}
