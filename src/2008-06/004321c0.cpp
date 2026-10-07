// roc 2008-06 004321c0  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004321c0
//
// 004321c0  b824168100           mov eax, 0x811624
// 004321c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004321c0()
{
    return &G;
}
