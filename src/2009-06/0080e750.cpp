// roc 2009-06 0080e750  unit: CXTPRibbonGroup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e750
//
// 0080e750  b8c8a8a200           mov eax, 0xa2a8c8
// 0080e755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080e750()
{
    return &G;
}
