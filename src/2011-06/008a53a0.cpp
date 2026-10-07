// roc 2011-06 008a53a0  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a53a0
//
// 008a53a0  b87833ad00           mov eax, 0xad3378
// 008a53a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a53a0()
{
    return &G;
}
