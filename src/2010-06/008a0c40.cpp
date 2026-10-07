// roc 2010-06 008a0c40  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0c40
//
// 008a0c40  b8e01ca700           mov eax, 0xa71ce0
// 008a0c45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a0c40()
{
    return &G;
}
