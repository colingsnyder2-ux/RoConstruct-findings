// roc 2009-06 0075a100  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075a100
//
// 0075a100  b8846e8f00           mov eax, 0x8f6e84
// 0075a105  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0075a100()
{
    return &G;
}
