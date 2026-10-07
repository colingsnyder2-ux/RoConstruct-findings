// roc 2010-06 007c7f30  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c7f30
//
// 007c7f30  b88c7da500           mov eax, 0xa57d8c
// 007c7f35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c7f30()
{
    return &G;
}
