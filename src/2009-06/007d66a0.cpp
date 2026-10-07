// roc 2009-06 007d66a0  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d66a0
//
// 007d66a0  b8486f9000           mov eax, 0x906f48
// 007d66a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d66a0()
{
    return &G;
}
