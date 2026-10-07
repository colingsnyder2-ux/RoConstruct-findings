// roc 2011-06 0080c410  unit: CXTPControlAction  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c410
//
// 0080c410  b8ec16ac00           mov eax, 0xac16ec
// 0080c415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080c410()
{
    return &G;
}
