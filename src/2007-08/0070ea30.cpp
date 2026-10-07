// roc 2007-08 0070ea30  unit: CXTColorBase  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ea30
//
// 0070ea30  b8d8e07d00           mov eax, 0x7de0d8
// 0070ea35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070ea30()
{
    return &G;
}
