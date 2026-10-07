// roc 2008-06 00710d60  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710d60
//
// 00710d60  b858d48500           mov eax, 0x85d458
// 00710d65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00710d60()
{
    return &G;
}
