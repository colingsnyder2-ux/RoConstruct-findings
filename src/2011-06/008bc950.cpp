// roc 2011-06 008bc950  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc950
//
// 008bc950  b8a054ad00           mov eax, 0xad54a0
// 008bc955  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008bc950()
{
    return &G;
}
