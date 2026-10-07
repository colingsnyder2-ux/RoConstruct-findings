// roc 2007-08 006a03e0  unit: CSelectionCaption  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a03e0
//
// 006a03e0  b80c307d00           mov eax, 0x7d300c
// 006a03e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a03e0()
{
    return &G;
}
