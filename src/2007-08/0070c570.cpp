// roc 2007-08 0070c570  unit: CXTColorPageStandard  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c570
//
// 0070c570  b894d87d00           mov eax, 0x7dd894
// 0070c575  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070c570()
{
    return &G;
}
