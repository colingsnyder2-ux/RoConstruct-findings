// roc 2008-06 00703520  unit: CXTPTabClientWnd::CWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703520
//
// 00703520  b878b78500           mov eax, 0x85b778
// 00703525  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00703520()
{
    return &G;
}
