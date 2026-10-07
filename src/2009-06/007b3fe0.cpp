// roc 2009-06 007b3fe0  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b3fe0
//
// 007b3fe0  b8942f9000           mov eax, 0x902f94
// 007b3fe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b3fe0()
{
    return &G;
}
