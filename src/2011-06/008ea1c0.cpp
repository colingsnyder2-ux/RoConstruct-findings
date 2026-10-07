// roc 2011-06 008ea1c0  unit: CXTColorPageStandard  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea1c0
//
// 008ea1c0  b84490ad00           mov eax, 0xad9044
// 008ea1c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ea1c0()
{
    return &G;
}
