// roc 2010-06 0089fda0  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fda0
//
// 0089fda0  b86cbabe00           mov eax, 0xbeba6c
// 0089fda5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089fda0()
{
    return &G;
}
