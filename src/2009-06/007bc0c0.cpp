// roc 2009-06 007bc0c0  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bc0c0
//
// 007bc0c0  b8204a9000           mov eax, 0x904a20
// 007bc0c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007bc0c0()
{
    return &G;
}
