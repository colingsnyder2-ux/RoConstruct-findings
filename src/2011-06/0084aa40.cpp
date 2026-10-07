// roc 2011-06 0084aa40  unit: CXTPMDIFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084aa40
//
// 0084aa40  b83c74ac00           mov eax, 0xac743c
// 0084aa45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0084aa40()
{
    return &G;
}
