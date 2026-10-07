// roc 2007-08 007124d0  unit: CXTColorPopup  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007124d0
//
// 007124d0  b898e67d00           mov eax, 0x7de698
// 007124d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007124d0()
{
    return &G;
}
