// roc 2009-06 0073cd80  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073cd80
//
// 0073cd80  b8d43a8f00           mov eax, 0x8f3ad4
// 0073cd85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0073cd80()
{
    return &G;
}
