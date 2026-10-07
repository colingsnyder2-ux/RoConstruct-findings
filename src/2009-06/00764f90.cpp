// roc 2009-06 00764f90  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00764f90
//
// 00764f90  b8cc8a8f00           mov eax, 0x8f8acc
// 00764f95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00764f90()
{
    return &G;
}
