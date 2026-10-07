// roc 2007-08 006f43f0  unit: CXTPCustomizeToolbarsPage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f43f0
//
// 006f43f0  b8d4bc7d00           mov eax, 0x7dbcd4
// 006f43f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f43f0()
{
    return &G;
}
