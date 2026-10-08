// roc 2007-08 00698230  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698230
//
// 00698230  b8f8157d00           mov eax, 0x7d15f8
// 00698235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00698230()
{
    return &G;
}
