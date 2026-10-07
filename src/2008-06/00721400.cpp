// roc 2008-06 00721400  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721400
//
// 00721400  b8c80a8600           mov eax, 0x860ac8
// 00721405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00721400()
{
    return &G;
}
