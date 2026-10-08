// roc 2007-08 00651820  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651820
//
// 00651820  b88c757c00           mov eax, 0x7c758c
// 00651825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00651820()
{
    return &G;
}
