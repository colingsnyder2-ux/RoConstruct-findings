// roc 2008-06 006c47c0  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c47c0
//
// 006c47c0  b8842a8500           mov eax, 0x852a84
// 006c47c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c47c0()
{
    return &G;
}
