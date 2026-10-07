// roc 2009-06 0080f920  unit: CXTPRibbonTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080f920
//
// 0080f920  b870a9a200           mov eax, 0xa2a970
// 0080f925  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080f920()
{
    return &G;
}
