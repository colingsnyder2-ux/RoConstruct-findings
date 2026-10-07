// roc 2009-06 00762ad0  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00762ad0
//
// 00762ad0  b8e0858f00           mov eax, 0x8f85e0
// 00762ad5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00762ad0()
{
    return &G;
}
