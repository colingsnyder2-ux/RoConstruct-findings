// roc 2011-06 008707f0  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008707f0
//
// 008707f0  b8a4c5ac00           mov eax, 0xacc5a4
// 008707f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008707f0()
{
    return &G;
}
