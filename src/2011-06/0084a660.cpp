// roc 2011-06 0084a660  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a660
//
// 0084a660  b8b065ac00           mov eax, 0xac65b0
// 0084a665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0084a660()
{
    return &G;
}
