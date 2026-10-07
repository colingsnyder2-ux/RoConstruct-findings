// roc 2009-06 00814930  unit: CXTPRibbonControlTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814930
//
// 00814930  b860aba200           mov eax, 0xa2ab60
// 00814935  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00814930()
{
    return &G;
}
