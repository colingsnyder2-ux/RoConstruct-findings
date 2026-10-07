// roc 2008-06 007567d0  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007567d0
//
// 007567d0  b818508600           mov eax, 0x865018
// 007567d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007567d0()
{
    return &G;
}
