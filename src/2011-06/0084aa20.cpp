// roc 2011-06 0084aa20  unit: CXTPFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084aa20
//
// 0084aa20  b82074ac00           mov eax, 0xac7420
// 0084aa25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0084aa20()
{
    return &G;
}
