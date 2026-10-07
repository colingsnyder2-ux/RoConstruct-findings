// roc 2008-06 00760540  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760540
//
// 00760540  b880628600           mov eax, 0x866280
// 00760545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00760540()
{
    return &G;
}
