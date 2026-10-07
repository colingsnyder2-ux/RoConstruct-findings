// roc 2011-06 00415440  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00415440
//
// 00415440  b818e7a500           mov eax, 0xa5e718
// 00415445  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00415440()
{
    return &G;
}
