// roc 2010-06 00475540  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00475540
//
// 00475540  b8281ba100           mov eax, 0xa11b28
// 00475545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00475540()
{
    return &G;
}
