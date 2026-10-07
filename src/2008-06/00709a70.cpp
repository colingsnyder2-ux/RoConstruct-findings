// roc 2008-06 00709a70  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709a70
//
// 00709a70  b844c28500           mov eax, 0x85c244
// 00709a75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00709a70()
{
    return &G;
}
