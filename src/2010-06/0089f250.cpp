// roc 2010-06 0089f250  unit: CXTPRibbonTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f250
//
// 0089f250  b8f8b9be00           mov eax, 0xbeb9f8
// 0089f255  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089f250()
{
    return &G;
}
