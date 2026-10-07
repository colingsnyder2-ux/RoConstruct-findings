// roc 2009-06 007b6e80  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b6e80
//
// 007b6e80  b8c03f9000           mov eax, 0x903fc0
// 007b6e85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b6e80()
{
    return &G;
}
