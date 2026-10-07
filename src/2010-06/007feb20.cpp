// roc 2010-06 007feb20  unit: CXTPPrintPageHeaderFooter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007feb20
//
// 007feb20  b80cfca500           mov eax, 0xa5fc0c
// 007feb25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007feb20()
{
    return &G;
}
