// roc 2011-06 008c4dd0  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c4dd0
//
// 008c4dd0  b82064ad00           mov eax, 0xad6420
// 008c4dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008c4dd0()
{
    return &G;
}
