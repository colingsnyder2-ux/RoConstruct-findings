// roc 2009-06 007d5bc0  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5bc0
//
// 007d5bc0  b8546c9000           mov eax, 0x906c54
// 007d5bc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d5bc0()
{
    return &G;
}
