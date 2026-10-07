// roc 2010-06 00846e00  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846e00
//
// 00846e00  b81c96be00           mov eax, 0xbe961c
// 00846e05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00846e00()
{
    return &G;
}
