// roc 2009-06 007d3960  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3960
//
// 007d3960  b8e8699000           mov eax, 0x9069e8
// 007d3965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d3960()
{
    return &G;
}
