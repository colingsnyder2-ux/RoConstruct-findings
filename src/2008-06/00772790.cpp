// roc 2008-06 00772790  unit: CXTPControlCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772790
//
// 00772790  b8d4a69600           mov eax, 0x96a6d4
// 00772795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00772790()
{
    return &G;
}
