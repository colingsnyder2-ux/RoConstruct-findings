// roc 2009-06 00783fb0  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783fb0
//
// 00783fb0  b85cd58f00           mov eax, 0x8fd55c
// 00783fb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00783fb0()
{
    return &G;
}
