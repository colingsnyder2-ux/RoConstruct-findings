// roc 2010-06 007f3e20  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f3e20
//
// 007f3e20  b834d2a500           mov eax, 0xa5d234
// 007f3e25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f3e20()
{
    return &G;
}
