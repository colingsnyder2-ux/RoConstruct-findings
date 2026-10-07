// roc 2011-06 008c2140  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2140
//
// 008c2140  b89460ad00           mov eax, 0xad6094
// 008c2145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008c2140()
{
    return &G;
}
