// roc 2009-06 0079c3c0  unit: CXTPControlGallery  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c3c0
//
// 0079c3c0  b81481a200           mov eax, 0xa28114
// 0079c3c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0079c3c0()
{
    return &G;
}
