// roc 2011-06 00852220  unit: CXTPControlPopupColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852220
//
// 00852220  b84c6fc900           mov eax, 0xc96f4c
// 00852225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00852220()
{
    return &G;
}
