// roc 2010-06 008105e0  unit: CXTPStatusBar::CStatusCmdUI  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008105e0
//
// 008105e0  b86017a600           mov eax, 0xa61760
// 008105e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008105e0()
{
    return &G;
}
