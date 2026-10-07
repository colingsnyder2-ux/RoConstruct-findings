// roc 2010-06 008238e0  unit: CXTPDockingPaneAutoHidePanel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008238e0
//
// 008238e0  b81050a600           mov eax, 0xa65010
// 008238e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008238e0()
{
    return &G;
}
