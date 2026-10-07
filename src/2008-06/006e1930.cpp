// roc 2008-06 006e1930  unit: CXTPFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1930
//
// 006e1930  b8fc5f8500           mov eax, 0x855ffc
// 006e1935  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006e1930()
{
    return &G;
}
