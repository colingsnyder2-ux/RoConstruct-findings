// roc 2010-06 007e91f0  unit: CXTPMDIFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e91f0
//
// 007e91f0  b8f4b7a500           mov eax, 0xa5b7f4
// 007e91f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e91f0()
{
    return &G;
}
