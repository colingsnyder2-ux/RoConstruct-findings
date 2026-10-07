// roc 2010-06 00808d10  unit: CXTPControlTabWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808d10
//
// 00808d10  b8ec7fbe00           mov eax, 0xbe7fec
// 00808d15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00808d10()
{
    return &G;
}
