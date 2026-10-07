// roc 2010-06 004282b0  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004282b0
//
// 004282b0  b87047a000           mov eax, 0xa04770
// 004282b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004282b0()
{
    return &G;
}
