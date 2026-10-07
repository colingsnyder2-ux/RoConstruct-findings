// roc 2008-06 006ecfe0  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ecfe0
//
// 006ecfe0  b8a4838500           mov eax, 0x8583a4
// 006ecfe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ecfe0()
{
    return &G;
}
