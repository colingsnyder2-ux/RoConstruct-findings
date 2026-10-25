// from server: 100% by auto
// roc 2008-06 007582a0  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007582a0
//
// 007582a0  b800538600           mov eax, 0x865300
// 007582a5  c3                   ret 

extern char G;

char* func_007582a0()
{
    return &G;
}
