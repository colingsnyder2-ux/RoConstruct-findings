// roc 2008-06 006ab1b0  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab1b0
//
// 006ab1b0  b844609600           mov eax, 0x966044
// 006ab1b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ab1b0()
{
    return &G;
}
