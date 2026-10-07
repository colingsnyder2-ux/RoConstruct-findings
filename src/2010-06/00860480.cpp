// roc 2010-06 00860480  unit: CXTPDockingPaneAutoHidePanel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00860480
//
// 00860480  b80cada600           mov eax, 0xa6ad0c
// 00860485  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00860480()
{
    return &G;
}
