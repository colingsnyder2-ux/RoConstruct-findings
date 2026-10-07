// roc 2008-06 00718ad0  unit: CXTCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718ad0
//
// 00718ad0  b840eb8500           mov eax, 0x85eb40
// 00718ad5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00718ad0()
{
    return &G;
}
