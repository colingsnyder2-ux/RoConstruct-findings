// roc 2009-06 007b2410  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b2410
//
// 007b2410  b8cc2c9000           mov eax, 0x902ccc
// 007b2415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b2410()
{
    return &G;
}
