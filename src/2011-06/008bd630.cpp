// roc 2011-06 008bd630  unit: CXTPDockingPaneAutoHidePanel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd630
//
// 008bd630  b81c57ad00           mov eax, 0xad571c
// 008bd635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008bd630()
{
    return &G;
}
