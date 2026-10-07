// roc 2008-06 0070fee0  unit: CXTPStatusBar::CStatusCmdUI  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070fee0
//
// 0070fee0  b840d28500           mov eax, 0x85d240
// 0070fee5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070fee0()
{
    return &G;
}
