// roc 2011-06 008f97c0  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f97c0
//
// 008f97c0  b810b8ad00           mov eax, 0xadb810
// 008f97c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f97c0()
{
    return &G;
}
