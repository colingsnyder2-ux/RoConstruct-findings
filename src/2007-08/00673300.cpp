// roc 2007-08 00673300  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673300
//
// 00673300  b890bd7c00           mov eax, 0x7cbd90
// 00673305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00673300()
{
    return &G;
}
