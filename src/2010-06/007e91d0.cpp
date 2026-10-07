// roc 2010-06 007e91d0  unit: CXTPFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e91d0
//
// 007e91d0  b8d8b7a500           mov eax, 0xa5b7d8
// 007e91d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e91d0()
{
    return &G;
}
