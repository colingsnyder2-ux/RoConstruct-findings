// roc 2011-06 008f8930  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8930
//
// 008f8930  b88cafc900           mov eax, 0xc9af8c
// 008f8935  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f8930()
{
    return &G;
}
