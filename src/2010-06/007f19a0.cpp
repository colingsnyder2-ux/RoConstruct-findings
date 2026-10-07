// roc 2010-06 007f19a0  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f19a0
//
// 007f19a0  b848cda500           mov eax, 0xa5cd48
// 007f19a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f19a0()
{
    return &G;
}
