// roc 2009-06 007f2b50  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f2b50
//
// 007f2b50  b8cc9f9000           mov eax, 0x909fcc
// 007f2b55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f2b50()
{
    return &G;
}
