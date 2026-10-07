// roc 2008-06 006f78a0  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f78a0
//
// 006f78a0  b868a48500           mov eax, 0x85a468
// 006f78a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f78a0()
{
    return &G;
}
