// roc 2007-08 00685310  unit: CXTPPropExchangeArchive  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00685310
//
// 00685310  b8e0f37c00           mov eax, 0x7cf3e0
// 00685315  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00685310()
{
    return &G;
}
