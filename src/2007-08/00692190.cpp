// roc 2007-08 00692190  unit: CXTPStatusBarPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692190
//
// 00692190  b8d8087d00           mov eax, 0x7d08d8
// 00692195  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00692190()
{
    return &G;
}
