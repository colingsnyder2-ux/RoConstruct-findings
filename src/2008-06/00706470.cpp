// roc 2008-06 00706470  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00706470
//
// 00706470  b828ba8500           mov eax, 0x85ba28
// 00706475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00706470()
{
    return &G;
}
