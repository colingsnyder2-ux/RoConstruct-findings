// roc 2010-06 008652c0  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008652c0
//
// 008652c0  b8a0b6a600           mov eax, 0xa6b6a0
// 008652c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008652c0()
{
    return &G;
}
