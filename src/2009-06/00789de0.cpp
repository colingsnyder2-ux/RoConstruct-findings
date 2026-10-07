// roc 2009-06 00789de0  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789de0
//
// 00789de0  b8c4e48f00           mov eax, 0x8fe4c4
// 00789de5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00789de0()
{
    return &G;
}
