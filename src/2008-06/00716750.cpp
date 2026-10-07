// roc 2008-06 00716750  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716750
//
// 00716750  b8c0dd8500           mov eax, 0x85ddc0
// 00716755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00716750()
{
    return &G;
}
