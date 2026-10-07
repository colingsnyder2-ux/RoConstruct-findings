// roc 2011-06 008bd6d0  unit: CXTPDockingPaneWindowSelect  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd6d0
//
// 008bd6d0  b80458ad00           mov eax, 0xad5804
// 008bd6d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008bd6d0()
{
    return &G;
}
