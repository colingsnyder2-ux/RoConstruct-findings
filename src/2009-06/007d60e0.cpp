// roc 2009-06 007d60e0  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d60e0
//
// 007d60e0  b82c6f9000           mov eax, 0x906f2c
// 007d60e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d60e0()
{
    return &G;
}
