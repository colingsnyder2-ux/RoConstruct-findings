// roc 2007-08 00664cd0  unit: CXTTreeView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00664cd0
//
// 00664cd0  b88c977c00           mov eax, 0x7c978c
// 00664cd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00664cd0()
{
    return &G;
}
