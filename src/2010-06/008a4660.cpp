// roc 2010-06 008a4660  unit: CXTPRibbonControlTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4660
//
// 008a4660  b8b4bcbe00           mov eax, 0xbebcb4
// 008a4665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a4660()
{
    return &G;
}
