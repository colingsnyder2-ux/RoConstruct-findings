// roc 2010-06 008a5ab0  unit: CXTPRibbonControlSystemButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5ab0
//
// 008a5ab0  b8f4bcbe00           mov eax, 0xbebcf4
// 008a5ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5ab0()
{
    return &G;
}
