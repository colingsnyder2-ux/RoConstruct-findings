// roc 2010-06 00893410  unit: CXTColorPageCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893410
//
// 00893410  b8ecfca600           mov eax, 0xa6fcec
// 00893415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00893410()
{
    return &G;
}
