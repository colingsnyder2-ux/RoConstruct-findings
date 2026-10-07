// roc 2011-06 0085c5a0  unit: CXTPPrintPageHeaderFooter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085c5a0
//
// 0085c5a0  b8fca4ac00           mov eax, 0xaca4fc
// 0085c5a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085c5a0()
{
    return &G;
}
