// roc 2007-08 006d9970  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d9970
//
// 006d9970  b8f88d7d00           mov eax, 0x7d8df8
// 006d9975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d9970()
{
    return &G;
}
