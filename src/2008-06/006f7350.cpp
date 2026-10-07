// roc 2008-06 006f7350  unit: CXTPPrintPageHeaderFooter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7350
//
// 006f7350  b84ca48500           mov eax, 0x85a44c
// 006f7355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f7350()
{
    return &G;
}
