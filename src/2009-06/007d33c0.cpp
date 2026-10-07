// roc 2009-06 007d33c0  unit: CXTPDockingPaneKeyboardHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d33c0
//
// 007d33c0  b8c0689000           mov eax, 0x9068c0
// 007d33c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d33c0()
{
    return &G;
}
