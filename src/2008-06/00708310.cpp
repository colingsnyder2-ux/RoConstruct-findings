// roc 2008-06 00708310  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00708310
//
// 00708310  b834c08500           mov eax, 0x85c034
// 00708315  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00708310()
{
    return &G;
}
