// roc 2009-06 007d8d60  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d8d60
//
// 007d8d60  b8b8729000           mov eax, 0x9072b8
// 007d8d65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d8d60()
{
    return &G;
}
