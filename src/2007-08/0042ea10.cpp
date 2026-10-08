// roc 2007-08 0042ea10  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ea10
//
// 0042ea10  b8b8a67800           mov eax, 0x78a6b8
// 0042ea15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042ea10()
{
    return &G;
}
