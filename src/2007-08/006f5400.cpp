// roc 2007-08 006f5400  unit: CXTPCustomizeToolbarsPage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5400
//
// 006f5400  b8dcbf7d00           mov eax, 0x7dbfdc
// 006f5405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f5400()
{
    return &G;
}
