// roc 2009-06 0075a1b0  unit: CXTPMDIFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075a1b0
//
// 0075a1b0  b864708f00           mov eax, 0x8f7064
// 0075a1b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0075a1b0()
{
    return &G;
}
