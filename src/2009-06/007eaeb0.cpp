// roc 2009-06 007eaeb0  unit: CXTPControlCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eaeb0
//
// 007eaeb0  b80499a200           mov eax, 0xa29904
// 007eaeb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007eaeb0()
{
    return &G;
}
