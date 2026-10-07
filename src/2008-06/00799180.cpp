// roc 2008-06 00799180  unit: CXTPRibbonControlTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799180
//
// 00799180  b8fcb89600           mov eax, 0x96b8fc
// 00799185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00799180()
{
    return &G;
}
