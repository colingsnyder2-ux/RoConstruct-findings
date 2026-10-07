// roc 2008-06 006b5280  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5280
//
// 006b5280  b8201b8500           mov eax, 0x851b20
// 006b5285  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006b5280()
{
    return &G;
}
