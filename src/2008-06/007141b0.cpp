// roc 2008-06 007141b0  unit: CXTPDockingPaneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007141b0
//
// 007141b0  b86cda8500           mov eax, 0x85da6c
// 007141b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007141b0()
{
    return &G;
}
