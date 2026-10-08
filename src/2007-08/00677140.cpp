// roc 2007-08 00677140  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677140
//
// 00677140  b82cd07c00           mov eax, 0x7cd02c
// 00677145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00677140()
{
    return &G;
}
