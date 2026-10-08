// roc 2007-08 00689940  unit: CXTPControlTabWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689940
//
// 00689940  b8ac708b00           mov eax, 0x8b70ac
// 00689945  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00689940()
{
    return &G;
}
