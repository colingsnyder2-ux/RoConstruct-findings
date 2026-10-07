// roc 2011-06 008baec0  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008baec0
//
// 008baec0  b8c451ad00           mov eax, 0xad51c4
// 008baec5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008baec0()
{
    return &G;
}
