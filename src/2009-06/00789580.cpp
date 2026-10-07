// roc 2009-06 00789580  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789580
//
// 00789580  b8a8e48f00           mov eax, 0x8fe4a8
// 00789585  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00789580()
{
    return &G;
}
