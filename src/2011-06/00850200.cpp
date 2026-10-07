// roc 2011-06 00850200  unit: CXTPDockingPaneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850200
//
// 00850200  b8d87fac00           mov eax, 0xac7fd8
// 00850205  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00850200()
{
    return &G;
}
