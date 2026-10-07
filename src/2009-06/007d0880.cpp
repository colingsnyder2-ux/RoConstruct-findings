// roc 2009-06 007d0880  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0880
//
// 007d0880  b838639000           mov eax, 0x906338
// 007d0885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d0880()
{
    return &G;
}
