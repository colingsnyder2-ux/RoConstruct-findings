// roc 2009-06 0075a190  unit: CXTPFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075a190
//
// 0075a190  b848708f00           mov eax, 0x8f7048
// 0075a195  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0075a190()
{
    return &G;
}
