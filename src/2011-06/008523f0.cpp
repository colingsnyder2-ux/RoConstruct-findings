// roc 2011-06 008523f0  unit: CXTPControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008523f0
//
// 008523f0  b8846fc900           mov eax, 0xc96f84
// 008523f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008523f0()
{
    return &G;
}
